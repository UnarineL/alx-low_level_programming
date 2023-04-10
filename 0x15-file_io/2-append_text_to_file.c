#include "main.h"

/**
 * append_text_to_file - appends text at the end
 * @filename: file name
 * @text_content: appanded text
 *
 * Return: 1 if succefull or -1 if failed
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_d, num_lett, perm;

	if (!filename)
	{
		return (-1);
	}

	file_d = open(filename, O_WRONLY | O_APPEND);
	if (file_d == -1)
	{
		return (-1);
	}

	if (text_content)
	{
		num_lett = strlen(text_content);
		perm = write(file_d, text_content, num_lett);

		if (perm == -1)
		{
			return (-1);
		}
	}
	close(file_d);
	return (1);
}
