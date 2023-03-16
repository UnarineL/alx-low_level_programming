#include <stdlib.h>

/**
 * array_range - creates an array if integers
 * @min: minimum number
 * @max: maximum number
 *
 * Return: int
 */
int *array_range(int min, int max)
{
	int i;
	int *array;
	int size;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;
	array = malloc(size * sizeof(int));
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = min + i;
	}
	return (array);
}
