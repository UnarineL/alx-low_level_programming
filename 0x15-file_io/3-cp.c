#include "main.h"

/**
 * main - copies the content of one to another
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 1 if succeful or exit if failed
 */
int main(int argc, char *argv[])
{
	int src, dest, n_read, wr, close_src, close_dest;
	unsigned int mode;
	char buffer[1024];

	n_read = 1024;
	mode = S_IRUSR | S_IWUSR | S_IRGRP |S_IWGRP | S_IROTH;
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to\n");
		exit(97);
	}
	src = open(argv[1], O_RDONLY);
	io_stat(src, -1, argv[1], '0');
	dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	io_stat(dest, -1, argv[2], 'W');
	while (n_read == 1024)
	{
		n_read = read(src, buffer, sizeof(buffer));
		if (wrote == -1)
		{
			io_stat(-1, -1, argv[1], '0');
		}
		wrote = write(dest, buffer, n_read);
		if (wrote == -1)
		{
			io_stat(-1, -1, argv[2], 'W');
		}
	}
	close_src = close(src);
	io_stat(close_src, src, NULL, 'C');
	close_dest = close(dest);
	io_stat(close_dest, dest, NULL, 'C');
	return (0);
}

/**
 * io_stat - checks if file is closed or opened
 * @stat: file descriptor
 * @filename: name of file
 * @md: close or open mode
 * @fd: file descriptor
 *
 * Return: void
 */
void io_stat(int stat, int fd, char *filename, char md)
{
	if (mode == 'C && stat == -1')
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	else if (mode == '0' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	else if (mode == 'W' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}
