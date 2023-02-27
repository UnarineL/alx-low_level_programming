#include "main.h"

/**
 * swap_int - swaps the numbers a and b in memory
 * @a: takes first arg to be swapped
 * @b: second arg to be swapped
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;

	*a = *b;
	*b = temp;
}
