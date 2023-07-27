#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverses all elements of an array.
 * @a: an array of integer.
 * @n: an integer.
 */
void reverse_array(int *a, int n)
{
	int j = 0;
	int i = 0;
	int t = 0;

	for (j = n - 1; j > n / 2; j--)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
		i++;
	}
}
