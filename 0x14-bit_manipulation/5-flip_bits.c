#include "main.h"

/**
 * flip_bits - flips bits to get from one num to another
 * @n: first num
 * @m: second num to flip
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	int count;
	unsigned long int curr;
	unsigned long int excl;

	count = 0;
	excl = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		curr = excl >> i;
		if (curr & 1)
		{
			count++;
		}
	}
	return (count);
}
