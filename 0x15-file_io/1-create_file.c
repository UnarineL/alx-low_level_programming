#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: text in the file
 *
 * Return: 1 id succeful or -1 if failed
 */
int create_file(const char *filename, char *text_content)
{
	int file_d, num_lett, perm;

	if (!filename)
	{
		return (-1);
	}
	file_d = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_d == -1)
	{
		return (-1);
	}
	if (!text_content)
	{
		text_content = "";
	}

	for (num_lett = 0; text_content[num_lett]; num_lett++)
	{
		;
	}
	perm = write(file_d, text_content, num_lett);

	if (perm == -1)
	{
		return (-1);
	}
	close(file_d);
	return (1);
}
