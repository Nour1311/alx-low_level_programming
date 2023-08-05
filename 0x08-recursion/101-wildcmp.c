#include "main.h"
#include <stdio.h>
/**
 * wildcmp - compares two strings .
 * @s1: a string.
 * @s2: a string.
 * Return: returns 1 if the strings can be considered identical.
 * otherwise return 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == *s2)
	{
		wildcmp(s1++, s2++);
		return (1);
	}
	else
	{
		if (*s1 == '*' || *s2 == '*')
		{
			wildcmp(s1++, s2++);
			return (1);
		}
		else
			return (0);
	}
}
