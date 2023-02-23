#include <stdio.h>

/**
 * print_square - prints squares
 * @size: takes the size of the square
 *
 * Return: void
 */
void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		putchar('\n');
	}
	else if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size - 1; j++ )
			{
				putchar(35);
			}
			putchar(35);
			putchar('\n');
		}
	}
}
