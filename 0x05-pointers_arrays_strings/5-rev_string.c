#include <stdio.h>
#include <string.h>

/**
 * rev_string - reverse a string
 * @s: takes arg of string
 */
void rev_string(char *s)
{
	int i;
	int len;
	char temp;

	len = strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}
