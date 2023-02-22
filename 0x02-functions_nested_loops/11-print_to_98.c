#include <stdio.h>

/**
 * print_to_98 - prints from n to max
 * @n: takes arg to start from
 *
 * Return: value from n to max
 */
int print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%d, ", i);
		}
	}
	else
	{
		for (i = n; i > 98; i--)
		{
			printf("%d, ", i);
		}
	}
	printf("98\n");
	return (0);
}
