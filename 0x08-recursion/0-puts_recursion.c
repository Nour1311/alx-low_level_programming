#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints a string folllowed by a new line.
 * @s: a string.
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		putchar(s[i]);
		i++;
	}
	putchar('\n');
}
