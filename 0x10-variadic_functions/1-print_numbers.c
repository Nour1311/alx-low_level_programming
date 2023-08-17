#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers.
 * @separator: string separates numbers.
 * @n: number of numbers.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	if (n == 0)
		return (0);
	va_start(args, int);
	for (i = 0; i < n - 1; i++)
		printf("%d%s\n", va_arg(args, void)separator);
	print("%d\n", va_arg(args, void));
	va_end(args);
}
