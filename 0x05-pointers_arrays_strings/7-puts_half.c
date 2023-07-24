#include "main.h"
#include <stdio.h>
/**
 * puts_half - prints half of a string.
 * @str: a string.
 */
void puts_half(char *str)
{
	int length_of_the_string = 0;
	int i = 0;
	int j = 0;

	while (str[j] != '\0')
	{
		j++;
	}
	length_of_the_string = j;
	if (length_of_the_string % 2 == 0)
	{
		for (i = length_of_the_string / 2; i < j - 1; i++)
		{
			putchar(str[i]);
		}
	}
	else
	{
		for (i = (length_of_the_string - 1) / 2; i < j - 1; i++)
		{
			putchar(str[i]);
		}
	}
	putchar('\n');
}
