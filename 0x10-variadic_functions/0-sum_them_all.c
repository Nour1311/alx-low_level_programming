#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters.
 * @n:a constant positif integer.
 * Return: the sum of all paramettres.
 */
int sum_them_all(const unsigned int n, ...)
{
	int i;
	int somme;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		somme = somme + va_arg(args, int);
	}
	va_end(args);
	return (somme);
}
