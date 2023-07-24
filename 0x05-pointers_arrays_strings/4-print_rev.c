#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints a string in reverse.
 * @s: a string.
 */
void print_rev(char *s)
{
	int i;
	int a = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		a++;
	}
	for (i = a - 1; i >= 0; i--)
	{
		putchar (s[i]);
	}
	putchar ('\n');
}
