#include "main.h"
#include <stdio.h>
/**
 * _strspn - gets the length of a prefix substring.
 * @s: a string.
 * @accept: a string
 * Return: number of byte.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int b = 0;
	int i = 0;

	while (*s)
	{
		for (; accept[i] ; i++)
		{
			if (accept[i] == *s)
			{
				b++;
				break;
			}
			else if ((accept[i + 1]) == '\0')
				break;
		}
		s++;
	}
	return (b);
}
