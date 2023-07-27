#include "main.h"
#include <stdio.h>
/**
 * cap_string - capitalizes all words of a string.
 * @s: a string.
 * Return: a new string.
 */
char *cap_string(char *s)
{
	int i;
	int sep = 0;
	char *temporair = s;
	char separateur[] = "\t\n,;.!?\"(){}";

	while (*temporair != '\0')
	{
		for (i = 0; separateur[i] != '\0'; i++)
		{
			if (*temporair == separators[i])
			{
				sep++;
			}
		}
		if (sep == 1 && *temporair >= 'a' && *temporair <= 'z')
		{
			*temporair = *temporair - 'a' + 'A';
		}
		sep--;
		temporair++;
	}
	return (s);
}
