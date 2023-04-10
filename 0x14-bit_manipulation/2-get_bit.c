#include "main.h"

/**
 * get_bit - returns the value of bit at given index
 * @n: given number
 * @index: index of the value to check
 *
 * Return: value of bit at index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int div, rev;

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
