%option yylineno

%{
#include "../headers/hash_table.h"
idt_t *table = NULL;

  unsigned int col = 0;
%}
NUM [0-9]
CHAR [a-zA-Z]
ID ({CHAR}|_)({CHAR}|{NUM})*
ws [ \t\n]
OP [-+*/<>?!%=~]
DLM [();{},]
SIGN [+-]

%%
"/*".*"*/" {
    PRINT(COMM);
}

"//"(.|[ \t])*\n {
    PRINT(COMM);
}

if {
    PRINT(IF);
    return IF;
}

else {
    PRINT(ELSE);
    return ELSE;
}

print {
    PRINT(PRINT);
    return PRINT;
}

scan {
    PRINT(SCAN);
    return SCAN;
}

for {
    PRINT(FOR);
    return FOR;
}

int|char|double {
    PRINT(TYPE);
    return TYPE;
}

{ID} {
    PRINT(ID);
    ADD_T(ID);
}

{ws} {
    col = *yytext == '\n' ? 0 : col + 1;
}

{SIGN}?({NUM}+\.{NUM}+|{NUM}+\.|{NUM}+)([eE][+-]?{NUM}+)? {
PRINT(DOUBLE);
ADD_T(DOUBLE);
}

{NUM}+ {
    PRINT(INT);
    ADD_T(INT);
}

{DLM} {
    PRINT(DLM);
    return *yytext;
}

{OP} {
    PRINT(OP);
    return *yytext;
}

. {
    set_err(table, *yytext);
}
%%

