#include "main.h"
#include <stdio.h>
/**
 * _strncpy - copies a string.
 * @src: a string.
 * @dest: a string.
 * @n: an integer.
 * Return: a new string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *temporair = NULL;

	while (*src != '\0' && n > 0)
	{
		*temporair = *src;
		temporair++;
		src++;
		n--;
	}
	if (*src == '\0')
	{
		dest = src;
	       	return (dest);
	}
	else
	{
		while (*dest != '\0')
		{
			*temporair = *dest;
			temporair++;
			dest++;
		}
		*dest = src;
                return (dest);

	}
}
