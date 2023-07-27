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

	if (n % 2 == 0)
	{
		for (j = n - 1; j > n / 2; j--)
		{
			a[i] = a[j];
			a[j] = temp[i];
			temp++;
			i++;
		}
	}
	else
	{
		for (j = n - 1; j > (n + 1) / 2; j--)
		{
			a[i] = a[j];
			a[j] = temp[i];
			temp++;
			i++;
		}
	}
}
