#ifndef LEXER_AST_H
#define LEXER_AST_H

#include "hash_table.h"

typedef enum {
    typeCond,
    typeId,
    typeOpr,
    typeDef,
    typeErr
} nodeEnum;

struct Ast {
    char *key;
    nodeEnum type;
    // nodes
    struct Ast *next;
};
typedef struct Ast Ast_t;


void push_back_ast(Ast_t **tree, YYSTYPE val);

void dfs(struct Ast*);

void excep(Ast_t*, int);

Ast_t *add_atr(Ast_t*, Ast_t*);

Ast_t *create_node();

void free_ast(Ast_t *tree);


#endif //LEXER_AST_H
