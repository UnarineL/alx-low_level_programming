#include <stdio.h>

/**
 * puts2 - prints every char of a string
 * @str: takes arg of array
 */
void puts2(char *str)
{
	int i;

	i = 0;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
