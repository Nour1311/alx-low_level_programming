#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatenates two strings.
 * @src: a string.
 * @dest: a string.
 * Return: a new string.
 */
char *_strcat(char *dest, char *src)
{
	char *temporair = dest;

	while (*temporair != '\0')
	{
		temporair++;
	}
	while (*src != '\0')
	{
		*temporair = *src;
		temporair++;
		src++;
	}
	*temporair = '\0';
	return (dest);
}
