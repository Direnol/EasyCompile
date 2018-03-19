%{
#include "../headers/hash_table.h"
extern idt_t *table;
int yylex();
void yyerror(char *err);
//#define YYSTYPE AstNode*
%}

%token INT DOUBLE ID IF ELSE PRINT SCAN FOR LEX_ERROR TYPE


%%
EVALUATE: EXPR          { printf("[=%d]\n", $1); } ;

EXPR:    TERM
        | EXPR '+' TERM { $$ = $1 + $3; }
        | EXPR '-' TERM { $$ = $1 - $3; }
;

TERM:    INT
        | TERM '*' INT  { $$ = $1 * $3; }
        | TERM '/' INT  { $$ = $1 / $3; }
;
%%


void yyerror(char *err)
{
    fprintf(stderr, "Have err [%s]\n", err);
}

int main(int argc, char **argv)
{
    //yydebug = 1;
    if (init_table(&table, std_hash, SIZE_TABLE)) {
        perror("Init table");
        return (EXIT_FAILURE);
    }
  printf("Input file is [%s]\n", (argc > 1 ? argv[1] : "stdin"));
  yyparse();
  statistic_table(table);
  free_table(table);
  return 0;
}