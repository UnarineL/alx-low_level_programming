#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at given index
 * @n: pointer to the value
 * @index: index to set the value
 *
 * Return: 1 if successful or -1 if error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
	{
		return (-1);
	}
	*n &= ~(1 << index);
	return (1);
}
