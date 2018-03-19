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
};
typedef struct Ast Ast_t;
void dfs(struct Ast*);

void excep(Ast_t*, int);

Ast_t *add_atr(Ast_t*, Ast_t*);

Ast_t *create_node();


#endif //LEXER_AST_H
