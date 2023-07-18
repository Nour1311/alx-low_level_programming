#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet in lowercase 10 times.
 *
 * Return: always 0 (success)
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		print_alphabet();
	}
	_putchar('\n');
}
