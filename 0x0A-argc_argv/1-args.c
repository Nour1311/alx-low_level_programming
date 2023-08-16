#include <stdio.h>
#include "main.h"
/**
 * main_args - prints number of arguments
 * @argc: number of arguments.
 * @argv: array of arguments
 * Return: always 0.
 */
int main_args(int argc, char *argv[] __attribute__((__unused__)))
{
	printf("%d\n", argc - 1);
	return (0);
}
