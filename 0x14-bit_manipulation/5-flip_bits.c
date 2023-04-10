#include "main.h"

/**
 * flip_bits - number of bits you flip to get from one number to another
 * @n: number to flip
 * @m: second number
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, j;
	unsigned long int curr_num, num;

	j = 0;
	num = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		curr_num = num >> i;
		if (curr_num & 1)
		{
			j++;
		}
	}
	return (j);
}
