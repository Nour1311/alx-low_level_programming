#include <stdio.h>

/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: a string.
 * Return: Always 0.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 2);
		putchar(*s);
	}
}
