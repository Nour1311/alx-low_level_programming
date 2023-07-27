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
	int cpt = 0;
	char separateur[] = " \t\n,;!?(){}\"";

	while (s[cpt] != '\0')
	{
		for (i = 0; separateur[i] != '\0'; i++)
		{
			if (s[cpt] == separateur[i])
			{
				sep++;
			}
		}
		if (sep > 0 && s[cpt] >= 'a' && s[cpt] <= 'z')
		{
			s[cpt] = s[cpt] - 'a' + 'A';
		}
		cpt++;
		sep = 0;
	}
	return (s);
}
