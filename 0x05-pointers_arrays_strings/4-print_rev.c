#include <stdio.h>
#include <string.h>

/**
 * print_rev - print the string in reverse
 * @s: takes the arg to be printed in reverse
 */
void print_rev(char *s)
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
