#include <stdio.h>

/**
 * print_triangle - print triangle
 * @size: takes size of triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size <= 0)
	{
		putchar('\n');
	}
	for (i = 1; i <= size; i++)
	{
		for (j = i; j < size; j++)
		{
			putchar(' ');
		}
		for (k = 1; k <= i; k++)
		{
			putchar('#');
		}
		putchar('\n');
	}
}
