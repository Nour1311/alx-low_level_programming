#include "lists.h"
/**
 * add_nodeint - adds a node at the beginning of a list.
 * @head: pointer to a pointer to the head of a list.
 * @n: an integer.
 * Return: a new list.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
        	return (NULL);
	new->n = n;
	if (head)
		new->next = *head;
	else
		new->next = NULL;
	return (new);
}
