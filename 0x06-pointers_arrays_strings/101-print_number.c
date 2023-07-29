#include "main.h"
#include <stdio.h>
/**
 * print_number -  prints an integer.
 * @n: an integer.
 */
void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		putchar('-');
		num = (unsigned int)(-n);
	}
	else
	{
		num = (unsigned int)n;
	}
	if (num / 10 == 0)
	{
		putchar(num + '0');
	}
	else
	{
		print_number(num / 10);
		putchar((num % 10) + '0');
}
