#include "main.h"
/**
 * _islower - checks if a letter is in lowercase or otherwise.
 *@c: the character in ASCI code.
 *
 * Return: if a letter is lowercase return 1 otherwise retur 0.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
