#include "main.h"
#include <stdio.h>
/**
 * length - returns the length of a string.
 * @s: a string.
 * Return: the length.
 */
int length(char *s)
{
	if (*s != '\0')
	{
		return (1 + length(s++));
	}
}

/**
 * my_palindrome - checks if the string is palindrome
 * @i: is an index
 * @l: is the length of the string
 * @s: is the string
 * Return: 1 if is polindrome or 0 if not
 */
int my_palindrome(int i, int l, char *s)
{
	if (l > 0)
	{
		if (s[i] == s[l])
		{
			return (my_palindrome(i + 1, l - 1, s));
		}
		else if (s[i] != s[l])
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	return (1);
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: is the string.
 * Return: return 1 if the string is a palindrome or 0 otherwise.
 */
int is_palindrome(char *s)
{
	return (my_palindrome(0, length(s) - 1, s));
}
