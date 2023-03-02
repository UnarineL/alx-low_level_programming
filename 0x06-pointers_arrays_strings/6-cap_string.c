#include <ctype.h>
#include <string.h>

/**
 * cap_string - capitalize all words of a string
 * @str: takes the string to capitalize
 *
 * Return: string
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 || isspace(str[i - 1]) ||  str[i - 1] == '.' || str[i] == ';')
		{
			str[i] = toupper(str[i]);
		}
		else if (str[i - 1] == ',' || str[i - 1] == '?' || str[i - 1] == '!')
		{
			str[i] = toupper(str[i]);
		}
		else if (str[i - 1] == '{' || str[i - 1] == '}' ||  str[i - 1] == '\"')
		{
			str[i] = toupper(str[i]);
		}
		else if (str[i - 1] == '(' || str[i - 1] == ')')
		{
			str[i] = toupper(str[i]);
		}
		else if (str[i - 1] == '\t')
		{
			continue;
		}
	}
	return (str);
}
