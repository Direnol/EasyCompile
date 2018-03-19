#ifndef LEXER_HASH_TABLE_H
#define LEXER_HASH_TABLE_H

#include "structs.h"

int init_table(idt_t **table, hash_func func, size_t size);

void free_table(idt_t *table);

void __free_collision(struct element *head);

int __add_collisioin(struct element *list, char *tok, int id);

int __get_collision(struct element *list, char *tok);

int get_token(idt_t *table, char *tok);

int add_token(idt_t *table, char *tok, int id);

size_t std_hash(char *);

void set_err(idt_t *table, char str);

int has_err(idt_t *t);

void statistic_table(idt_t *table);

void __statistic_collision(struct element *list);

char *toktostr(int id);

#endif //LEXER_HASH_TABLE_H
