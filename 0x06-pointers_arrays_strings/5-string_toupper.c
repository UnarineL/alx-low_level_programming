#include <ctype.h>
#include <string.h>

/**
 * string_toupper - changes all lowercase letters to uppercase
 * @str: string to print in uppercase
 *
 * Return: str
 */
char *string_toupper(char *str)
{
	char *ptr;

	ptr = str;

	while (*ptr != '\0')
	{
		*ptr = toupper(*ptr);
		ptr++;
	}
	return (str);
}
