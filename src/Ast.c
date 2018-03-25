#include "../headers/Ast.h"

Ast_t *ast_node(attr_t attr, nodeEnum type)
{
    Ast_t *new_node = calloc(1, sizeof(*new_node));
    if (new_node == NULL) return NULL;
    new_node->type = type;
    new_node->attr = attr;
    return new_node;
}

Ast_t *ast_init(nodeEnum type)
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
#define P(S) //puts(#S)
    Ast_t *c1 = NULL, *c2 = NULL, *c3 = NULL;
    switch (node->type) {
        case typeRoot:
            c1 = node->attr.atom.head;
            P(Root);
            break;
        case typeList:
            c1 = node->attr.list.val;
            c2 = node->attr.list.next;
            P(LIST);
            break;
        case typeCond:
            P(COND);
            break;
        case typeDef:
            c1 = node->attr.defvar.expr;
            if (node->attr.defvar.key) free(node->attr.defvar.key);
            node->attr.defvar.key = NULL;
            P(DEFVAR);
            break;
        case typeOpr:
            c1 = node->attr.oper.left;
            c2 = node->attr.oper.right;
            P(OPERATION);
            break;
        case typeId:
            P(ID);
            break;
        case typeTerm:
            free(node->attr.term.id);
            P(TERM);
            break;
        case typeFunc:
            c1 = node->attr.func.name;
            c2 = node->attr.func.args;
            c3 = node->attr.func.body;
            P(FUNC);
            break;
        case typeArgs:
            c1 = node->attr.args.var;
            c2 = node->attr.args.next;
            P(ARG);
            break;
        case typeRet:
        case typeBody:
            c1 = node->attr.body.val;
            c2 = node->attr.body.next;
            P(BODY);
            break;
        default:
            c1 = c2 = NULL;
            P(DEFAULT);
            break;
    }
    free(node);
    if (c1)
     ast_free(c1);
    if (c2)
        ast_free(c2);
    if (c3)
        ast_free(c3);
}

void ast_dfs(struct Ast *node)
{
    if (node == NULL) return;
    Ast_t *c1 = NULL, *c2 = NULL, *c3 = NULL;
    switch (node->type) {
        case typeRoot:
            c1 = node->attr.atom.head;
            break;
        case typeList:
            c1 = node->attr.list.val;
            c2 = node->attr.list.next;
            break;
        case typeCond:
            P(COND);
            break;
        case typeDef:
#define dv node->attr.defvar
            printf("%s %s%c", _get_type(dv.type), dv.key, (dv.expr ? '=' : '\n'));
            c1 = dv.expr;
            break;
        case typeOpr:
#define op node->attr.oper
            printf("%c ", op.oper);
            c1 = op.left;
            c2 = op.right;
            break;
        case typeId:
            P(ID);
            break;
        case typeTerm:
            free(node->attr.term.id);
            P(TERM);
            break;
        case typeFunc:
            c1 = node->attr.func.name;
            c2 = node->attr.func.args;
            c3 = node->attr.func.body;
            P(FUNC);
            break;
        case typeArgs:
            c1 = node->attr.args.var;
            c2 = node->attr.args.next;
            P(ARG);
            break;
        case typeRet:
        case typeBody:
            c1 = node->attr.body.val;
            c2 = node->attr.body.next;
            P(BODY);
            break;
        default:
            c1 = c2 = NULL;
            P(DEFAULT);
            break;
    }
    if (c1)
        ast_dfs(c1);
    if (c2)
        ast_dfs(c2);
    if (c3)
        ast_dfs(c3);
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

char *_get_type(int type)
{
#define TOS(S) (#S)
    switch (type) {
        case INT:return TOS(INT);
        case DOUBLE:return TOS(DOUBLE);
        case CHAR:return TOS(CHAR);
        default: return TOS(ERROR_TYPE);
    }
}
