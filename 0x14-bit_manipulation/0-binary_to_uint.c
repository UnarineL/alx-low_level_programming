#include "main.h"

/**
 * binary_to_uint - converts binary num to unsigned int
 * @b: pointer to string with binary num
 *
 * Return: decimal value
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int d_num;

	d_num = 0;
	if (!b)
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		d_num <<= 1;
		if (b[i] == '1')
		{
			d_num += 1;
		}
	}
	return (d_num);
}
