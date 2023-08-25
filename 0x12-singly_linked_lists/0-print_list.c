#include "lists.h"
#include <stdio.h>

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
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		node++;
	}

	return (node);
}
