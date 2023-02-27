#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * puts_half - print half of a string
 * @str: takes string arg
 */
void puts_half(char *str)
{
	int i;
	int len;
	int middle;

	len = strlen(str);
	middle = len / 2;

	for (i = middle; i < len; i++)
	{
		if (len % 2 != 0)
		{
			len++;
		}
		putchar(str[i]);
	}
	putchar('\n');
}
