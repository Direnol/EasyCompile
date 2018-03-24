#include "../headers/hash_table.h"


int init_table(idt_t **table, hash_func func, size_t size)
{
    idt_t *t = malloc(sizeof(*t));
    if (t == NULL) return EXIT_FAILURE;
    t->table = calloc(size, sizeof(*t->table));
    if (t->table == NULL) {
        int err = errno;
        free(t);
        errno = err;
        return EXIT_FAILURE;
    }
    t->size = size;
    t->used = 0;
    t->hash = func;

    t->err = 0;
    *table = t;
    return EXIT_SUCCESS;
}

void free_table(idt_t *table)
{
    struct element *arr = table->table;
    for (size_t i = 0; i < table->size; ++i) {
        if (arr[i].used) {
            free(arr[i].tok);
            arr[i].used = UNUSED;
            if (arr[i].next) __free_collision(arr[i].next);
        }
    }
    free(arr);
    free(table);
}

void __free_collision(struct element *head)
{
    if (head->next) __free_collision(head->next);
    head->next = NULL;
    free(head);
}

size_t std_hash(char *str)
{
    size_t hash = 5381;
    size_t c;

    while ((c = (size_t) *str++))
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

    return hash;
}

int add_token(idt_t *table, char *tok, int id)
{
    size_t h = table->hash(tok) % table->size;
    struct element *arr = table->table;
    if (arr[h].used == UNUSED) {
        arr[h].used = USE;
        arr[h].tok = strdup(tok);
        arr[h].id = id;
//        printf("[%zu, {%s}, {%s}]\n", h, tok, toktostr(id));
        return EXIT_SUCCESS;
    }
    if (strcmp(tok, arr[h].tok) == 0)
        return EXIT_SUCCESS;
    arr[h].next = malloc(sizeof(*arr));
    if (arr[h].next == NULL)
        return EXIT_FAILURE;
    memset(arr[h].next, 0, sizeof(*arr));

    return __add_collisioin(arr[h].next, tok, id);

}

int __get_collision(struct element *list, char *tok)
{
    if (list == NULL) return LEX_ERROR;
    if (strcmp(tok, list->tok) == 0) return list->id;
    if (list->next) return __get_collision(list->next, tok);
    return LEX_ERROR;
}

int get_token(idt_t *table, char *tok)
{
    size_t h = table->hash(tok) % table->size;
    struct element *arr = table->table;
    if (arr[h].used == UNUSED) return LEX_ERROR;
    if (strcmp(tok, arr[h].tok) == 0) return arr[h].id;
    return __get_collision(arr[h].next, tok);
}

int __add_collisioin(struct element *list, char *tok, int id)
{
    if (list->used == USE) {
        if (strcmp(tok, list->tok) == 0) return EXIT_SUCCESS;
        if (list->next) return __add_collisioin(list->next, tok, id);

        list->next = malloc(sizeof(*list));
        if (list->next == NULL) return EXIT_FAILURE;
        memset(list->next, 0, sizeof(*list));
        return __add_collisioin(list->next, tok, id);
    }
    list->used = USE;
    list->id = id;
    list->tok = strdup(tok);
    return EXIT_SUCCESS;
}

void set_err(idt_t *table, char str)
{
    table->err = 1;
}
int has_err(idt_t *t)
{
    return t->err;
}

void statistic_table(idt_t *table)
{
    puts("{");
    struct element *arr = table->table;
    for (size_t i = 0; i < table->size; ++i) {
        if (arr[i].used == USE) {
            printf("(%s, %s)\n", toktostr(arr[i].id), arr[i].tok);
            if (arr[i].next) {
                __statistic_collision(arr[i].next);
            }
        }
    }
    puts("}");
}

void __statistic_collision(struct element *list)
{
    printf("(%s, %s)\n", toktostr(list->id), list->tok);
    if (list->next) __statistic_collision(list->next);
}

char *toktostr(int id)
{
#define TOSTR(S) strcpy(buf, #S); break
    static char buf[16];
    switch (id) {
        case INT:
            TOSTR(INT);
        case DOUBLE:
            TOSTR(DOUBLE);
        case FOR:
            TOSTR(FOR);
        case ELSE:
            TOSTR(ELSE);
        case ID:
            TOSTR(ID);
        case IF:
            TOSTR(IF);
        case  PRINT:
            TOSTR(PRINT);
        case SCAN:
            TOSTR(SCAN);
        case CONST_DOUBLE:
            TOSTR(CONST_DOUBLE);
        case CONST_INT:
            TOSTR(CONST_INT);
        default:
            TOSTR(LEX_ERROR);
    }
    return buf;
}
