#include "main.h"
#include <stdio.h>
/**
 * _puts - prints a string.
 * @str: a string.
 */
void _puts(char *str)
{
	int i;

	for (i = 1; str[i] != '\0'; i++)
	{

		putchar (str[i]);
	}
	putchar ('\n');
}
