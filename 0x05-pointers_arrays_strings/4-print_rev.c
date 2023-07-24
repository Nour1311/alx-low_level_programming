#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints a string in reverse.
 * @s: a string.
 */
void print_rev(char *s)
{
	int i, a;

	a = _strlen(*s);
	for (i = a - 1; i >= 0; i--)
	{
		putchar (s[i]);
	}
	putchar ('\n');
}
