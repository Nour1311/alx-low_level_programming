#include "main.h"
#include <stdio.h>
/**
 * *_strcpy - copies the string pointed to by src.
 *
 * @dest: destination.
 * @src: source.
 *
 * Return: str
 */
char *_strcpy(char *dest, char *src)
{
	char *guard = dest;

	while (*src)
	{
		*dest++ = *src++;
		*dest = 0;
	}
	return (guard);
}
