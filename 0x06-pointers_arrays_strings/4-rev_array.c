#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverses all elements of an array.
 * @a: an integer.
 * @n: an integer.
 */
void reverse_array(int *a, int n)
{
	int j = 0;
	int i = 0;
	int *temp = a;

	for (j = n; j >= n / 2 - 1; j--)
	{
		a[i] = a[j];
		a[j] = temp;
		temp++;
		i++;
	}
}
