#include <string.h>

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: string to locate from
 * @accept: bytes
 *
 * Return: pointer to byte
 */
char *_strpbrk(char *s, char *accept)
{
	char *ptr;

	ptr = strpbrk(s, accept);
	return (ptr);
}
