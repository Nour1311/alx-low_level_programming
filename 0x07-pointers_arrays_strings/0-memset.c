#include "main.h"
#include <stdio.h>
/**
 * _memset - fills memory with a constant byte
 * @s: a string.
 * @b: a string.
 * @n: an integer.
 *
 * Return: a new string.
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
