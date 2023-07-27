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

	for (*temporair != '\0')
	{
		if (s[temporair] >= 'a' && s[temporair] <= 'z')
		{
			s[temporair] = s[temporair] - 'a' + 'A';
		}
		temporair++;
	}
	return (s);
}
