#include <stdlib.h>
#include <string.h>

/**
 * str_concat -concatenate to strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to string 1
 */
char *str_concat(char *s1, char *s2)
{
	char *new_str;
	size_t s1_len, s2_len;

	s1_len = 0;
	s2_len = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	s1_len = strlen(s1);
	s2_len = strlen(s2);

	new_str = malloc(s1_len + s2_len + 1);
	if (new_str == NULL)
	{
		return (NULL);
	}

	memcpy(new_str, s1, s1_len);
	memcpy(new_str + s1_len, s2, s2_len + 1);

	return (new_str);
}
