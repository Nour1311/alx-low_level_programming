#include "main.h"
/**
 * read_textfile - reads a textfile.
 * @filename: name of the file.
 * @letters: number of letters to print.
 * Return: number of letter printed.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd_r, count, fd_o;
	char *buf_l;

	if (filename == NULL)
		return (0);
	fd_o = open(filename, O_RDONLY);
	if (fd_o == -1)
		return (0);
	buf_l = malloc(sizeof(char) * letters);
	if (buf_l == NULL)
		return (0);
	fd_r = read(fd_o, buf_l, letters);
	if (fd_r == -1)
	{
		free(buf_l);
		return (0);
	}
	count = write(STDOUT_FILENO, buf_l, fd_r);
	if (count == -1)
	{
		free(buf_l);
		return (0);
	}
	close(fd_o);
	free(buf_l);
	return (count);
}
