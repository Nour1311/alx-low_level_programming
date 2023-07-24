#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers.
 * @n: an integer witch is the number of array's elements.
 * @a: pointer to an array.
 */
void print_array(int *a, int n)
{
	int i;

	if (n == 1)
	{
		printf("%d", a[0]);
	}
	else
	{
		printf("%d", a[0]);
		for (i = 1; i < n; i++)
		{
			printf(", %d", a[i]);
		}
	}
	putchar('\n');
}
