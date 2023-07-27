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
	char *temporair = dest

	while (*src != '\0' && n > 0)
	{
		*temporair = *src;
		temporair++;
		src++;
		n--;
	}
	if (*src == '\0')
	{
	       	return (dest);
	}
	else
	{
		while (*temporair != '\0')
		{
			temporair++;
		}
		*temporair = '\0';
		return (dest);
}
