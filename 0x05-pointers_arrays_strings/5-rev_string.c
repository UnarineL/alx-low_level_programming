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

	len = strlen(s);

	for (i = len - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
