#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list.
 * @h: points to the list's head.
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t node = 0;

	while (h)
	{
		if (!h->s)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->length, h->s);
		h = h->next;
		node++;
	}

	return (node);
}
