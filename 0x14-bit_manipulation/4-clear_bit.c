#include "main.h"

/**
 * clear_bit - sets the valu to 0
 * @n: input value
 * @index: index
 *
 * Return: 1 if works or -1 if failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
	{
		return (-1);
	}
	*n &= ~(1 << index);
	return (1);
}
