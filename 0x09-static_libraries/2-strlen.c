#include <string.h>

/**
 * _strlen_recursion - return the length of string recursively
 * @s: string source
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int len;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		len = strlen(s);
	}
	return (len);
}
