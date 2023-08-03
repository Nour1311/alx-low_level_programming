#include "main.h"
#include <stdio.h>

/**
 * sqrrt -  returns the value the sqrt and accept 2 parametres.
 * @x: an integer.
 * @y: an integer.
 * Return: the  result.
 */
int sqrrt(int x, int y)
{
	if (x == (y * y))
	{
		return (y);
	}
	else
	{
		if ((y * y) >= x)
		{
			return (-1);
		}
		else
		{
			return (sqrrt(x, y + 1));
		}
	}
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: an integer.
 * Return: the the result.
 */
int _sqrt_recursion(int n)
{
	if (n <= 0)
	{
		return (-1);
	}
	else
	{
		return (sqrrt(n, 0));
	}
}
