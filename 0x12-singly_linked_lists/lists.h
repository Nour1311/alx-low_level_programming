#ifndef LISTS_H
#define LIST_H
#include <stdlib.h>
#include <string.h>
/**
 * struct l - singly linked list
 * @s: string - (malloc'ed string)
 * @length: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */

typedef struct l
{
	char *s;
	unsigned int length;
	struct l *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
