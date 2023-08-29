#include "lists.h"
/**
 * print_listint - prints all elements of a list.
 * @h: a pointer to a liste.
 * Return: a size_t value
 */
size_t print_listint(const listint_t *h)
{
	listint_t *temp;
	size_t num = 0;

	*temp = *h;
	if (*temp == NULL)
		return (0);
	while (temp != NULL)
	{
		printf("%d", temp.n)
		num++;
		*temp = *temp.next;
	}
	return (num);
}
