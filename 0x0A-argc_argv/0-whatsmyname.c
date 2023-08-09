#include "main.h"
#include <stdio.h>
/**
 * main - prints its name, followed by a new line.
 * @argc: an ineger the length of the array.
 * @argv: an array contain the instruction of the program.
 * Return: always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s \n", argv[0]);
	return (0);
}
