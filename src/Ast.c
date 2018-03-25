#include "../headers/Ast.h"

Ast_t *ast_node(attr_t attr, nodeEnum type)
{
    Ast_t *new_node = calloc(1, sizeof(*new_node));
    if (new_node == NULL) return NULL;
    new_node->type = type;
    new_node->attr = attr;
    return new_node;
}

Ast_t *ast_init(int type)
{
    Ast_t *root = calloc(1, sizeof(Ast_t));
    if (root == NULL)
        return NULL;
    root->type = type;
    return root;
}

void ast_free(Ast_t *node)
{
    if (node == NULL)
        return;
    Ast_t *c1, *c2;
    switch (node->type) {
        case typeRoot:
            c1 = node->attr.atom.head;
            free(node);
            ast_free(c1);
            break;
        case typeList:
            c1 = node->attr.list.val;
            c2 = node->attr.list.next;
            free(node);
            ast_free(c1);
            ast_free(c2);
            break;
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
            c1 = node->attr.atom.head;
            ast_dfs(c1);
            break;
        case typeList:
            c1 = node->attr.list.val;
            c2 = node->attr.list.next;
            ast_dfs(c1);
            ast_dfs(c2);
            break;
        case typeCond:break;
        case typeDef:break;
        case typeOpr:break;
        case typeId:break;
        default:break;
    }
}
Ast_t *ast_push(Ast_t *parent, Ast_t *child)
{
    if (parent->attr.atom.head == NULL) {
        parent->attr.atom.head = parent->attr.atom.tail = ast_init(typeList);
        parent->attr.atom.tail->attr.list.val = child;
        return parent->attr.atom.head;
    }

    parent->attr.atom.tail->attr.list.next = ast_init(typeList);
    parent->attr.atom.tail = parent->attr.atom.tail->attr.atom.tail->attr.list.next;
    parent->attr.atom.tail->attr.list.val = child;
    return parent->attr.atom.tail;
}
