#include <string.h>

/**
 * _strcat - concatenates two strings
 * @dest: is the destination of the copied string
 * @src: the source of the string
 *
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	char *result;

	result = strcat(dest, src);

	return (result);
}
