#include "main.h"
#include <stdio.h>
/**
 * natural - computes and prints the sum of all
 * the multiples of 3 or 5 below 1024
 *
 * Return: the sum.
 */
int natural(void)
{
	int sum = 0;
	int x;

	for (x = 1; x * 3 < 1024; x++)
	{
		if (x % 3 == 0)
		{
			sum = sum + x;
		}
	}
	for (x = 1; x * 5 < 1024; x++)
	{
		if (x % 5 == 0)
		{
			sum = sum + x;
		}
	}
	return (sum);
	putchar(sum + '0');
	putchar('\n');
}

