#include <string.h>

/**
 * is_palindrome - return 1 if a string is palindrome
 * @s: source of sring
 *
 * Return: int 1 or 0
 */
int is_palindrome(char *s)
{
	int len;

	len = strlen(s);

	if (len <= 1)
	{
		return (1);
	}
	if (s[0] != s[len-1])
	{
		return (0);
	}
	s[len-1] = '\0';
	return (is_palindrome(s+1));
}
