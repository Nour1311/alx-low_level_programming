#include "main.h"
#include <stdio.h>

/**
 * factorial -  returns the factorial of a number .
 * @n: an integer.
 * Return: the the result.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		if (n == 0)
		{
			return (1);
		}
		else
		{
			return (factorial(n) * factorial(n - 1));
		}
	}
}
