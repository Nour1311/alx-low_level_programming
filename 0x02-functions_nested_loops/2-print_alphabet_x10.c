#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet in lowercase 10 times.
 *
 * Return: always 0 (success)
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
