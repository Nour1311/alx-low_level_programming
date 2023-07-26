#include "main.h"
#include <stdio.h>
/**
 * _strncat - concatenates two strings.
 * @src: a string.
 * @dest: a string.
 * @n: an integer.
 * Return: a new string.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *temporair = dest;

	while (*temporair != '\0')
	{
		temporair++;
	}
	while (*src != '\0' && src <= n)
	{
		*temporair = *src;
		temporair++;
		src++;
	}
	*temporair = dest;
	return (dest);
}
