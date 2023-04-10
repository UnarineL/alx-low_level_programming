#include "main.h"

/**
 * read_textfile - read fileand print it to posix standard output
 * @filename: name of file
 * @letters: number of letters
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d;
	ssize_t read_len, write_len;
	char *buff;

	if (filename == NULL)
	{
		return (0);
	}
	file_d = open(filename, O_RDONLY);
	if (file_d == -1)
	{
		return (0);
	}
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		close(file_d);
		return (0);
	}
	read_len = read(file_d, buff, letters);
	close(file_d);
	if (read_len == -1)
	{
		free(buff);
		return (0);
	}
	write_len = write(STDOUT_FILENO, buff, read_len);
	free(buff);
	if (read_len != write_len)
	{
		return (0);
	}
	return (write_len);
}
