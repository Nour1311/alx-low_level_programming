#include "main.h"
#include <stdio.h>
/**
 * cap_string - capitalizes all words of a string.
 * @s: a string.
 * Return: a new string.
 */
char *cap_string(char *s)
{
	char *temporair = s;

	while (*temporair != '\0')
	{
		if (*temporair >= 'a' && *temporair <= 'z')
		{
			*temporair = *temporair - 'a' + 'A';
		}
		temporair++;
	}
}
