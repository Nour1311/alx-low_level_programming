#include "main.h"
#include <stdio.h>
/**
 * _strcmp - compares between two strings.
 * @s1: a string.
 * @s2: a string.
 * Return: the diference.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
