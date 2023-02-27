#include <stdio.h>
#include <string.h>

/**
 * puts2 - prints every char of a string
 * @str: takes arg of array
 */
void puts2(char *str)
{
	int i;
	int len;

	i = 0;
	len = strlen(str);

	for (i = 0; i <= len - 1; i += 2)
	{
		putchar(i + '0');
	}	
	putchar('\n');
}
