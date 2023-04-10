#include "main.h"

/**
 * set_bit - set value of nit to 1 at given index
 * @n: value to set
 * @index: index to set value
 *
 * Return: 1 if it worked or -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set_val;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}
	set_val = 1 << index;
	*n = *n | set_val;
	return (1);
}
