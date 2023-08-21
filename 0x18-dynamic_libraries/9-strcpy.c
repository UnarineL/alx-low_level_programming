#include <stdio.h>
#include <string.h>

/**
 * _strcpy - copies string to a pointer
 * @dest: destination of the copies string
 * @src: source of the string
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *ptr;

	ptr = strcpy(dest, src);
	return (ptr);
}
