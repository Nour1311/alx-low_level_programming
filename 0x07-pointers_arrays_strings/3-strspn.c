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
	unsigned int bytes = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (accept[i] == *s)
			{
				bytes++;
				break;
			}
		}
		return (bytes);
		s++;
	}
	return (bytes);
}
