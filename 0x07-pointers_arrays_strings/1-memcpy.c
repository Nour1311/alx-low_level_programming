#include "main.h"
/**
 * _memcpy - copies memory area
 * @src: a string
 * @dest:a string
 * @n:an integer
 * Return: returns new value of target
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j = 0;

	for (; j < n; j++)
		dest[j] = src[j];

	return (dest);
}
