#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @n: an integer.
 *
 * Return: the last digit of n.
 */
int print_last_digit(int n)
{
	int x;

	x =  n % 10;
	if (x < 0)
	{
		x = x * -1;
	}
	_putchar(x + '0');
	return (x);
}
