#include <stdio.h>

/**
 * print_diagonal - print \ in diagonal
 * @n: take number of diagonals to print
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		putchar('\n');
	}
	else if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				putchar(' ');
			}
			putchar('\\');
			putchar('\n');
		}
	}
}
