#include <stdio.h>
#include <string.h>

/**
 * print_array - print an array of given elements
 * @a: takes the array to be printed
 * @n: number of elements in the array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
