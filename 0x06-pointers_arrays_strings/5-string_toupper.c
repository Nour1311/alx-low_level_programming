#include "main.h"
#include <stdio.h>
/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @s: a string.
 * Return: a new string with only uppercase letters.
 */
char *string_toupper(char *s)
{
	char *temporaire = s;

	while (*temporair != '\0')
	{
		if (*temporair >= 'a' && *temporair <= 'z')
		{
			*temporair = *temporair - 'a' + 'A';
		}
		temporair++;
	}
	return (s);
}
