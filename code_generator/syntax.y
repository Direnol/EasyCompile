%{
#include "../headers/Ast.h"
extern idt_t *table;
extern FILE *yyin;
int yylex();
void yyerror(char *err);
Ast_t *root = NULL;
char ans[1024];
%}

%token INT CHAR DOUBLE
%token IF ELSE PRINT SCAN FOR LEX_ERROR RETURN
%token ID CONST_INT CONST_DOUBLE

%union {
    int type;
    char *str;
    struct Ast *tree;
}

%type <type> INT CHAR DOUBLE TYPE
%type <str> ID CONST_INT CONST_DOUBLE
%type <tree> IF ELSE PRINT SCAN FOR RETURN
%type <tree> START ATOM DEFVAR FUNC ARGS BODY EVALUATE EXPR TERM

%%

START:  ATOM { /*ast_push(root, $1);*/ printf("[PROGRAM]\n");}
        | ATOM START { /*ast_push(root, $1);*/ }

ATOM:   FUNC { /*$$ = $1;*/  printf("[FUNC]\n");}
        | DEFVAR { /*$$ = $1;*/ printf("[DEFVAR]\n"); }

DEFVAR: TYPE ID { /*$$ = ast_node({$1, $2, NULL}, DEFVAR);*/ }
        | TYPE ID '=' EVALUATE { /*$$ = ast_node({$1, $2, $4}, DEFVAR); */ }

FUNC:   TYPE ID '(' ARGS ')' '{' BODY '}' { /*$$ = ast_node($1, $2, $4, $7, BODY);*/ }

ARGS:   TYPE ID { /*$$ = ast_node({$1, $2, NULL}, ARGS);*/ }
        | TYPE ID ',' ARGS { /*$$ = ast_node({$1, $2, $4}, ARGS);*/ }

BODY:   RETURN EVALUATE ';' { printf("[BODY]\n");}
        | { }

EVALUATE: EXPR { /*$$ = $1*/printf("[EVAL]\n"); }

EXPR:   TERM { printf("[EXPR]\n"); }
        | EXPR '+' TERM { printf("[EXPR]\n"); }
        | EXPR '-' TERM { printf("[EXPR]\n"); }
;

TERM:   VAR { printf("[TERM]\n"); }
        | TERM '*' VAR { printf("[TERM]\n"); }
        | TERM '/' VAR { printf("[TERM]\n"); }
;

VAR:    CONST_INT { /*$$ = $1*/ }
        | CONST_DOUBLE { /*$$ = $1*/ }
        | ID { /*$$ = $1*/ }

TYPE:   INT {$$ = $1;}
        | CHAR {$$ = $1;}
        | DOUBLE {$$ = $1;}

%%


void yyerror(char *err)
{
    fprintf(stderr, "Have err [%s]\n", err);
}

int main(int argc, char **argv)
{
    if (argc > 1) {
        yyin = fopen(argv[1], "r");
        if (yyin == NULL) {
            perror("Open file");
            return 1;
        }
    }

    //yydebug = 1;
    if (init_table(&table, std_hash, SIZE_TABLE)) {
        perror("Init table");
        return (EXIT_FAILURE);
    }
    root = ast_init();
    printf("Input file is [%s]\n", (argc > 1 ? argv[1] : "stdin"));
    yyparse();
    // statistic_table(table);
    free_table(table);
    ast_free(root);
    return 0;
}