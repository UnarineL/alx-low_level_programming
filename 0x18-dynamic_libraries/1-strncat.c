#include <string.h>

/**
 * _strncat - concatenate a string withouut null termination
 * @dest: destination of the concatenated string
 * @src: source of the concetenated string
 * @n: number characters to be appended to dest
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	size_t dest_len;

	dest_len = strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
