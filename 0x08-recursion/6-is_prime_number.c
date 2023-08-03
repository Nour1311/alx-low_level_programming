#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - returns 1 if n is a prime number.
 * @n: an integer.
 * Return: 1 if n is prime number otherwise 0.
 */
int is_prime_number(int n)
{
	if (n <= 0)
	{
		return (0);
	}
	else
	{
		if ((n % 2 == 0) || (n % 3 == 0) || (n % 5 == 0))
		{
			return (0);
		}
		else
		{
			if (n % 9 == 0 || n % 7 == 0)
			{
				return (0);
			}
			else
			{
				return (1);
			}
		}
	}
}
