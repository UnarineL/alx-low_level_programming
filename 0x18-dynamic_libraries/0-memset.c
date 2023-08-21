#include <string.h>

/**
 * _memset - fills memory with constant byte
 * @s: points the memory area
 * @b: constant byte
 * @n: the firs byte to be filled
 *
 * Return: pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr;

	ptr = memset(s, b, n);
	return (ptr);
}
