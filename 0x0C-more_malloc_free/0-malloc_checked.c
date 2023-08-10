#include <stdio.h>
#include "main.h"
/**
 * malloc_checked - allocates memory.
 * @b: an integer.
 * Return: Returns a pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	return (malloc(malloc(b)));
}
