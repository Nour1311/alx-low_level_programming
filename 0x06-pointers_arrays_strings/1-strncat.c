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
	char *pointer = NULL;

	while (*temporair != '\0')
	{
		temporair++;
	}
	while (src <= n)
	{
		*temporair = *src;
		temporair++;
		src++;
	}
	*pointer = dest;	
	return (*pointer);
}
