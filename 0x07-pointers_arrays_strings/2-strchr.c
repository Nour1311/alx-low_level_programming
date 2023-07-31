#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: a string
 * @c: a string
 * Return: a new string
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while ((s[i] != c) || (s[i] != '\0'))
		i++;
	if (s[i] == c)
		return (s + i);
	else
		return (NULL);
}
