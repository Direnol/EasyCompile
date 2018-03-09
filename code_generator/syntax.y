%{
#include "../headers/hash_table.h"
extern idt_t *table;
int yylex();
void yyerror(char *err);

%}


%%
program: program
    |
    ;
%%


void yyerror(char *err)
{
    fprintf(stderr, "Have err [%s]\n", err);
}