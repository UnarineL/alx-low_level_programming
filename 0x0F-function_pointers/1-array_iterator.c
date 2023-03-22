#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes func given as param
 * @array: pointer to array
 * @size: of elements
 * @action: pointer to a function
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}

}
