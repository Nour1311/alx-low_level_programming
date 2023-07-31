#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: a string
 * @c: a string
 * Return: a new string
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0'))
	{
		if (*s == c)
			return ((char*)s);
		s++;
	}
	return (NULL);
}
