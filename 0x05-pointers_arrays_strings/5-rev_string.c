#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverses a string.
 * @s: a string.
 */
void rev_string(char *s)
{
	char rvrs = s[0];
	int i = 0;
	int j = 0;

	while (s[j] != '\0')
	{
		j++;
	}
	for (i = 0; i < j; i++)
	{
		j--;
		rvrs = s[i];
		s[i] = s[j];
		s[j] = rvrs;
	}
}
