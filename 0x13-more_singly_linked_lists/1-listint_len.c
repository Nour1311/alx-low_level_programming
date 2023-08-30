#include "lists.h"
/**
 * listint_len - returns the number of all  elements of a list.
 * @h: a pointer to a list
 * Return: the number of elements in a list.
 */
size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (number);
}
