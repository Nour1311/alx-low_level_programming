#include "main.h"
#include <stdio.h>
/**
 * puts2 - prints every other character of a string.
 * @str: a string.
 */
void puts2(char *str)
{
	int i;
	int x = 0;
	int y;
	int j = 0;
	char c = str[0];
	int *tab = NULL;

	while (str[j] != '\0')
	{
		c = str[j];
		c = getchar();
		tab[j] = c;
		j++;
	}
	for (i = 0; i < 127; i++)
	{
		for (y = 0; y < j; y++)
		{
			if (i == tab[y])
			{
				x = 1;
			}
			y++;
		}
		if (x == 0)
		{
			putchar(i);
		}
	}
}
