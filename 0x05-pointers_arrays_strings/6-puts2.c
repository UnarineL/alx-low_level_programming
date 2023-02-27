#include <stdio.h>
#include "main.h"

/**
 * puts2 - prints every char of a string
 * @str: takes arg of array
 */
void puts2(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i += 2;
	}
	putchar('\n');
}
