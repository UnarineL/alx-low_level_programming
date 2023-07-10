#include "main.h"

/**
 * read_textfile - reads a text file and print it
 * @filename: name of the file
 * @letters: number of letters to read and print
 *
 * Return: number of letters to read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t r_len, w_len;
	char *buff;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		close(fd);
		return (0);
	}
	r_len = read(fd, buff, letters);
	close(fd);
	if (r_len == -1)
	{
		free(buff);
		return (0);
	}
	w_len = write(STDOUT_FILENO, buff, r_len);
	free(buff);
	if (r_len != w_len)
	{
		return (0);
	}
	return (w_len);
}
