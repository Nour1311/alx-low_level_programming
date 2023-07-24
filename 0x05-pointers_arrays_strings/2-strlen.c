#include "main.h"
#include <stdio.h>
/**
 * _strlen - return a length of a string.
 *
 *@s: is a pointer to a string.
 *
 * Return: a length of a string.
 */
int _strlen(char *s)
{
	char *p = s;

	while (*p != '\0')
	{
		*p++;
	}
	return (p - s);
}
