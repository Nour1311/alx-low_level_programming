#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverses a string.
 * @s: a string.
 */
void rev_string(char *s)
{
	char *rvrs = NULL;
	int i = 0;
	int j = 0;

	while (s[j] != '\0')
	{
		j++;
	}
	while (s[i] != '\0')
	{
		if (j >= 0)
		{
			rvrs[i] = s[j];
			j--;
		}
		i++;
	}
	s = rvrs;
}
