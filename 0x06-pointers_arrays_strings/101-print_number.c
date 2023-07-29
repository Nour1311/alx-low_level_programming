#include "main.h"
#include <stdio.h>
/**
 * print_number -  prints an integer.
 * @n: an integer.
 */
void print_number(int n)
{
	unsigned int num;
	
	num = n;
	if (n < 0)
	{
		putchar(45);
		num = -n;
	}
	if (num / 10)
	{
		print_number(num / 10);
	}
	putchar((num % 10) + '0');
}
