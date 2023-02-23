#include <stdio.h>

/**
 * print_line - this function prints a line
 * @n: takes number of line to be printed
 *
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		putchar('\n');
	}
	else if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			putchar('_');
		}
	putchar('\n');
	}
}
