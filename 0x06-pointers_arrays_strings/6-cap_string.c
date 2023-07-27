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
	int sep = 1;
	char *temporair = s;
	char separateur[] = "\t\n,;.!?\"(){}";

	while (*temporair != '\0')
	{
		for (i = 0; separateur[i] != '\0'; i++)
		{
			if (*temporair == separateur[i])
			{
				sep++;
				break;
			}
		}
		temporair++;
		if (sep == 1 && *temporair >= 'a' && *temporair <= 'z')
		{
			*temporair = *temporair - 'a' + 'A';
		}
		sep = 0;
	}
	return (s);
}
