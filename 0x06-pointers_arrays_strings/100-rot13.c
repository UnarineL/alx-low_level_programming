#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * rot13 - encodes a string using rot13
 * @str: takes the string to encode
 *
 * Return: encoded string
 */
char *rot13(char *str)
{
	char *p = str;

	while (*p != '\0')
	{
		if ((*p >= 'a' && *p <= 'm') || (*p >= 'A' && *p <= 'M'))
		{
			*p += 13;
		}
		else if ((*p >= 'n' && *p <= 'z') || (*p >= 'N' && *p <= 'Z'))
		{
			*p -= 13;
		}
		p++;
	}
	return (str);
}
