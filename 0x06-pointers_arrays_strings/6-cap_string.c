#include <ctype.h>

/**
 * cap_string - capitalize all words of a string
 * @str: takes the string to capitalize
 *
 * return: char
 */
char *cap_string(char *str)
{
	int i;
	int cap;

	i = 0;
	cap = 1;

	while (str[i])
	{
		if (isspace(str[i]) || str[i] == ',' || str[i] == ';' || str[i] == '.')
		{
			cap = 1;
		}
		else if (str[i] == '!' || str[i] == '?' || str[i] == '"' || str[i] == '(')
		{
			cap = 1;
		}
		else if (str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			cap = 1;
		}
		else if (cap)
		{
			str[i] = toupper(str[i]);
			cap = 0;
		}
		i++;
	}
	return (0);
}
