%option yylineno

%{
#include "../headers/Ast.h"
idt_t *table = NULL;

  unsigned int col = 0;
%}
NUM [0-9]
CHAR [a-zA-Z]
ID ({CHAR}|_)({CHAR}|{NUM}|_)*
ws [ \t\n]
OP [-+*/<>?!%=~]
DLM [();{},]
SIGN [-+]

%%
"/*".*"*/" {
    PRINT(COMM);
}

"//"(.|[ \t])*\n {
    PRINT(COMM);
}

"return" {
    PRINT(RETURN);
    return RETURN;
}

"if" {
    PRINT(IF);
    return IF;
}

"else" {
    PRINT(ELSE);
    return ELSE;
}

"print" {
    PRINT(PRINT);
    return PRINT;
}

"scan" {
    PRINT(SCAN);
    return SCAN;
}

"for" {
    PRINT(FOR);
    return FOR;
}

"int" {
    PRINT(TYPE);
    yylval.type = INT;
    return INT;
}

"char" {
    PRINT(TYPE);
    yylval.type = CHAR;
    return CHAR;
}

"double" {
    PRINT(TYPE);
    yylval.type = DOUBLE;
    return DOUBLE;
}

{ID} {
    PRINT(ID);
    ADD_T(ID);
    yylval.str = strdup(yytext);
    return ID;
}

{ws} {
    col = *yytext == '\n' ? 0 : col + 1;
}

{SIGN}?{NUM}+ {
    PRINT(CONST_INT);
    ADD_T(CONST_INT);
    yylval.str = strdup(yytext);
    return CONST_INT;
}

{SIGN}?({NUM}+\.{NUM}+|{NUM}+\.|{NUM}+)([eE][+-]?{NUM}+)? {
    PRINT(CONST_DOUBLE);
    yylval.str = strdup(yytext);
    ADD_T(CONST_DOUBLE);
    return CONST_DOUBLE;
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

