#include "main.h"

/**
 * get_bit - returns value of bit
 * @n: checked decimal
 * @index: index to check
 *
 * Return: value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int div;
	unsigned long int rev;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}

	div = 1 << index;
	rev = n & div;
	if (rev == div)
	{
		return (1);
	}
	return (0);
}
