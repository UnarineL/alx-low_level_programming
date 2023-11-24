#include "main.h"

/**
 * set_bit - sets value of bit to index
 * @n: value to input
 * @index: index to input
 *
 * Return: 1 if successful or -1 if failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int put;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}
	put = 1 << index;
	*n = *n | put;
	return (1);
}
