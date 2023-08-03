#include "main.h"
#include <stdio.h>

/**
 * _recursion -  returns the value of x raised to the power of y.
 * @x: an integer.
 * @y: an integer.
 * Return: the the result.
 */
int _recursion(int x, float y)
{
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		if (y == 0)
		{
			return (1);
		}
		else
		{
			return (x * _recursion(x, y - 1));
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
		return (_recursion(n, 0.5));
	}
}
