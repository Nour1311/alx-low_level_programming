#include "main.h"
/**
 * _isalpha - checks if a letter is in lowercase or otherwise.
 *@c: the character in ASCI code.
 *
 * Return: if a letter is lowercase return 1 otherwise retur 0.
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		if (c >= 97 || c <= 90)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	else
	{
		return (0);
	}
}
