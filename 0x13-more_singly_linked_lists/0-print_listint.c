#include "lists.h"
#include <string.h>

/**
 * print_listint - prints all elements of a list.
 * @h: a pointer to a liste.
 * Return: the size of the list
 */
size_t print_listint(const listint_t *h)
{
	size_t size = 0;

	while (h)
	{
		printf("%d\n", h->n);
		size++;
		h = h->next;
	}
	return (size);
}
