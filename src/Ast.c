#include "../headers/Ast.h"

Ast_t *ast_node(attr_t attr, nodeEnum type)
{
    Ast_t *new_node = calloc(1, sizeof(*new_node));
    if (new_node == NULL) return NULL;
    new_node->type = type;

    switch (type) {
        case typeList:break;
        case typeCond:break;
        case typeDef:break;
        case typeOpr:break;
        case typeId:break;
        default:free(new_node);
            return NULL;
    }
    return new_node;
}

Ast_t *ast_init()
{
    Ast_t *root = calloc(1, sizeof(Ast_t));
    if (root == NULL)
        return NULL;
    root->type = typeRoot;
    return root;
}

void ast_free(Ast_t *node)
{
    if (node == NULL)
        return;
    Ast_t *c1, *c2;
    switch (node->type) {
        case typeRoot:
            c1 = node->attr.atom.val;
            c2 = node->attr.atom.next;
            free(node);
            ast_free(c1);
            ast_free(c2);
            break;
        case typeList:break;
        case typeCond:break;
        case typeDef:break;
        case typeOpr:break;
        case typeId:break;
        default:break;
    }
}

void ast_dfs(struct Ast *node)
{
    if (node == NULL) return;
    Ast_t *c1, *c2;
    switch (node->type) {
        case typeRoot:
            c1 = node->attr.atom.val;
            c2 = node->attr.atom.next;
            ast_dfs(c1);
            ast_dfs(c2);
            break;
        case typeList:break;
        case typeCond:break;
        case typeDef:break;
        case typeOpr:break;
        case typeId:break;
        default:break;
    }
}