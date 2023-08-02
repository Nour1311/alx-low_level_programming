#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints a string folllowed by a new line.
 * @s: a string.
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
	if (s == '\0')
	{
		putchar('\n');
	}
	else
	{
		putchar(*s);
		s++;
		_puts_recursion(s);
	}
}
