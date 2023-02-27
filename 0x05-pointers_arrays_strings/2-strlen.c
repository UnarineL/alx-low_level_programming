#include "main.h"

/**
 * _strlen - prints the length of string
 * @s: takes the string
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
