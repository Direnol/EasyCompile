%{
#include "../headers/Ast.h"
extern idt_t *table;
extern FILE *yyin;
int yylex();
void yyerror(char *err);
Ast_t *tree = NULL;
char ans[1024];
%}

%token INT DOUBLE ID IF ELSE PRINT SCAN FOR LEX_ERROR TYPE RETURN

%union {
    char *str;
    struct Ast *tree;
}

%%

START:  FUNC { printf("FUNC\n"); }

FUNC:   TYPE ID '(' ARGS ')' '{' BODY '}' { printf("[BODY]\n"); }

ARGS:   TYPE ID { printf("[ARGS]\n"); }
        | TYPE ID ',' ARGS { printf("ARGS"); }

BODY:   RETURN EVALUATE ';' { printf("[BODY]\n");}
        |  { printf("[BODY]\n"); }

EVALUATE: EXPR { printf("[EVAL]\n"); }

EXPR:   TERM { printf("[EXPR]\n"); }
        | EXPR '+' TERM { printf("[EXPR]\n"); }
        | EXPR '-' TERM { printf("[EXPR]\n"); }
;

TERM:   INT { printf("[TERM]\n"); }
        | TERM '*' INT  { printf("[TERM]\n"); }
        | TERM '/' INT  { printf("[TERM]\n"); }
;
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

    printf("Input file is [%s]\n", (argc > 1 ? argv[1] : "stdin"));
    yyparse();
    // statistic_table(table);
    free_table(table);
    return 0;
}