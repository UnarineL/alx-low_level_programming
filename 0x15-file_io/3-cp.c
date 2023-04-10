#include "main.h"

/**
 * io_check - check can open or close
 * @file_d: file descriptor
 * @filename: name of file
 * @f_mode: file mode
 * @status: cheeck if its closed or opened
 *
 * Return: nothing
 */
void io_check(int file_d, int status, char *filename, char f_mode)
{
	if (f_mode == 'c' && status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_d);
		exit(98);
	}
	else if (f_mode == '0' && status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	else if (f_mode == 'W' && status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}

/**
 * main - copy content of file to another file
 * @argc: argument count
 * @argv: argument array passed
 *
 * Return: 1 if succeful or exit if failed
 */
int main(int argc, char *argv[])
{
	int src, dest, num, w, c_src, c_dest;
	unsigned int mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH;
	char buffer[1024];

	num = 1024;
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to\n");
		exit(97);
	}

	src = open(argv[1], O_RDONLY);
	io_check(src, -1, argv[1], '0');
	dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	io_check(dest, -1, argv[2], 'W');

	while (num == 1024)
	{
		num = read(src, buffer, sizeof(buffer));
		if (num == -1)
		{
			io_check(-1, -1, argv[1], '0');
		}
		w = write(dest, buffer, num);
		if (w == -1)
		{
			io_check(-1, -1, argv[2], 'W');
		}
	}
	c_src = close(src);
	io_check(c_src, src, NULL, 'C');
	c_dest = close(dest);
	io_check(c_dest, dest, NULL, 'C');
	return (0);
}
