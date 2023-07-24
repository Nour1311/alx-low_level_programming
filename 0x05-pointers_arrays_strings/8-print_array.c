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

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
		printf("%d", a[(n - 1)]);
	}
	putchar('\n');
}
