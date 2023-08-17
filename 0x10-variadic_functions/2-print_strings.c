#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings.
 * @separator: string separates numbers.
 * @n: number of strings.
 * Return: always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *s;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);
		if (s == NULL)
			printf("nil");
		else
		{
			printf("%s", s);
			if (separator != NULL && i < n - 1)
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
