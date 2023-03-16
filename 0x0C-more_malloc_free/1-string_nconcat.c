#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string destination
 * @s2: string source
 * @n: size of string
 *
 * Return: destination
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t len1;
	size_t len2;
	size_t tot_len;
	char *res;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);
	tot_len = len1 + (n < len2 ? n : len2) + 1;

	res = malloc(tot_len);
	if (res == NULL)
	{
		return (NULL);
	}

	strcpy(res, s1);
	strncat(res + len1, s2, n);

	return (res);
}
