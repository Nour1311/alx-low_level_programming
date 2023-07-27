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

	while (a[j] != NULL)
	{
		j++;
	}
	for (; j >= j / 2; j--)
	{
		a[i] = a[j];
		a[j] = temp;
		temp++;
		i++;
	}
}
