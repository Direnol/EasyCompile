#include "../headers/Ast.h"

void free_ast(Ast_t *tree)
{
    for ( ; tree != NULL; ) {
        if (tree->key != NULL) free(tree->key);
        Ast_t *tmp = tree;
        tree = tree->next;
        free(tmp);
    }
}

void push_back_ast(Ast_t **tree, YYSTYPE val)
{
    if (*tree == NULL) {
        *tree = calloc(1, sizeof(**tree));
        (*tree)->key = val.str;
        return;
    }
    Ast_t *p;
    for (p = *tree; p->next != NULL; p = p->next);
    p->next = calloc(1, sizeof(*p));
    p = p->next;
    p->key = val.str;
}


