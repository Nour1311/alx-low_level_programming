#include "function_pointers.h"
/**
 * int_index - searches for an integer.
 * @array: an array.
 * @size: number of elements in the array.
 * @cmp: the function that we should use.
 * Return:returns the index of the first element.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL)
		return (-1);
	for (; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		return (i);
	}
	return (-1);
}
