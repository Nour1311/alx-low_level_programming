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
		exit();
	va_start(args, n);
	for (i = 0; i < n - 1; i++)
		printf("%d%s", va_arg(args, int), separator);
	print("%d\n", va_arg(args, int));
	va_end(args);
}
