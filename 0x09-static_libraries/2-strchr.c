#include <string.h>

/**
 * _strchr - locates a character in a string
 * @s: location of the string to locate
 * @c: character to locate
 *
 * Return: pointer to first occurance
 */
char *_strchr(char *s, char c)
{
	char *ptr;

	ptr = strchr(s, c);
	return (ptr);
}
