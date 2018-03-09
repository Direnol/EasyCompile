%option yylineno
%{
#include "../headers/hash_table.h"
idt_t *table = NULL;

  unsigned int col = 0;
%}
NUM [0-9]
_ID [a-zA-Z_]
CHAR [a-zA-Z]
ID {_ID}({CHAR}|{NUM})*
ws [ \t\n]
OP [-+*/]
DLM [();{}]


%%
"/*".*"*/" {PRINT(COMM);}
"//"(.|[ \t])*\n {PRINT(COMM);}
{ID} {PRINT(ID); ADD_T(ID);}
{ws} {col = *yytext == '\n' ? 0 : col + 1;}
{NUM}+ {PRINT(NUM); ADD_T(NUM);}
":=" {PRINT(EQ);}
{DLM} {PRINT(DLM);}
{OP} {PRINT(OP);}
. {PRINT(LEX_ERROR); set_err(table, *yytext);}
%%


int main(int argc, char **argv)
{
    if (init_table(&table, std_hash, SIZE_TABLE)) {
        perror("Init table");
        return (EXIT_FAILURE);
    }
  if (argc > 1) {
    yyin = fopen(argv[1], "r");
    if (!yyin) return EXIT_FAILURE;
  }
  printf("Input file is [%s]\n", (argc > 1 ? argv[1] : "stdin"));
  yylex();
  statistic_table(table);
  free_table(table);
  return 0;
}
