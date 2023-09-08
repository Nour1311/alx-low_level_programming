#include "main.h"
/**
 * create_file - creates file.
 * @filename: name of the file.
 * @text_content: text to write inside.
 * Return: 1 if the file was created, -1 otherwise.
 */
int create_file(const char *filename, char *text_content)
{
	int fd_o, fd_w;

	if (filename == NULL)
		return (-1);
	fd_o = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
	if (fd_o == -1)
		return (-1);
	if (text_content != NULL)
	{
		fd_w = write(fd_o, text_content, _strlen(text_content));
		if (fd_w == -1)
			return (-1);
	}
	close(fd_o);
	return (1);
}

/**
 * _strlen - calculates the lenght.
 * @str: array of char.
 * Return: lenght of the string.
 */
int _strlen(char *str)
{
	int cpt = 0;

	while (*str++)
		cpt++;
	return (cpt);
}
