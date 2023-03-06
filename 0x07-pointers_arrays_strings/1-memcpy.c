#include <string.h>

/**
 * _memcpy - copies memory area from src to dest
 * @dest: destionation of copied memory area
 * @src: source at which mem is copied
 * @n: bytes of mem area to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr;

	ptr = memcpy(dest, src, n);
	return (ptr);
}
