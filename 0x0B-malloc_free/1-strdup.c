#include <string.h>
#include <stdlib.h>

/**
 * _strdup - returns duplicated string
 * @str: source of string to duplicate
 *
 * Return: pointer to string
 */
char *_strdup(char *str)
{
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}

	dup = strdup(str);
	return (dup);
}
