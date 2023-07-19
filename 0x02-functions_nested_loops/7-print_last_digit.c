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

	n =  n % 10;
	x = n * 10 + n;
	_putchar(x);
	return (x);
}
