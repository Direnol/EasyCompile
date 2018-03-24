#ifndef LEXER_AST_H
#define LEXER_AST_H

#include "hash_table.h"
#include <glib-2.0/glib.h>

typedef enum {
    typeRoot,
    typeList,
    typeCond,
    typeId,
    typeOpr,
    typeDef,
    typeTerm,
    typeBody,
    typeErr
} nodeEnum;

typedef struct Ast Ast_t;

/* main list of atoms
 * get node and it's pushed to back */
struct _atom {
    Ast_t *next;
    Ast_t *val;
};

/*node of condition
 * contains: statement, body for true, and if exist else, pointer to else */
struct _if {
    Ast_t *expr;
    Ast_t *body;
    Ast_t *_else;
};

/*node of body
 * contains list of other nodes same as if, defvar, for */
struct _body {
    Ast_t *batom; // defvar, expr, if/else, return
};

/* node of term
 * contains type and identifier */
struct _term {
    int type;
    char *id;
};

/* node of define variable
 * contains term thath describe variable
 * and maybe node of init expr */
struct _defvar {
    Ast_t *term;
    Ast_t *expr;
};

/* tree of some operation; other name is expr */
struct _operation {
    int oper;
    Ast_t *left;
    Ast_t *right;
};

/* node of cycle
 * contains */
struct _for {

};

typedef union {
    struct _atom atom;
    struct _if if_;
    struct _body body;
    struct _defvar defvar;
    struct _operation operation;
    struct _term term;
    struct _for for_;
} attr_t;

union list {
    char *key;
    int err;
};

struct Ast {
    nodeEnum type;
    union list arg;
    attr_t attr;
};


Ast_t *ast_init();

Ast_t *ast_node(attr_t attr, nodeEnum type);

void ast_dfs(struct Ast *root);

Ast_t *ast_push(Ast_t *parent, Ast_t *child);

void ast_free(Ast_t *node);

#endif //LEXER_AST_H
