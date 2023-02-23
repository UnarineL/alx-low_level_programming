#include <stdio.h>

/**
 * print_numbers - functions prints numbers from 0 to 9
 */
void print_numbers(void)
{
	int i;

	i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
}
