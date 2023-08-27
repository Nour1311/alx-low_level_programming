#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer of an array of chars
 */
char *_strdup(char *str)
{
	char *sout;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (j = 0; str[j] != '\0'; j++)
		;

	sout = (char *)malloc(sizeof(char) * (j + 1));

	if (sout == NULL)
		return (NULL);

	for (i = 0; i <= j; i++)
		sout[i] = str[i];

	return (sout);
}
