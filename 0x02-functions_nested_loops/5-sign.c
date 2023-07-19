#include "main.h"
/**
 * print_sign - checks if a number is positif or negatif or zero.
 * @n: an integer.
 *
 * Return: if a number is positif  return 1
 * if it is zero return 0
 * and if it is negatif return -1.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		if (n == 0)
		{
			_putchar('0');
			return (0);
		}
		else
		{
			_putchar('-');
			return (-1);
		}
	}
}
