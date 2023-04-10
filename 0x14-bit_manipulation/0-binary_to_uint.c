#include "main.h"

/**
 * binary_t0_uint - convert binary to unsigned int
 * @b: pointer to a string
 *
 * Return: unsigned int of binary or 0 if error occurs
 */
unsigned int binary_to_uint(const char *b)
{
	int count;
	unsigned int number;

	number = 0;
	if (!b)
	{
		return (0);
	}
	for (count = 0; b[count] != '\0'; count++)
	{
		if (b[count] != '0' && b[count] != '1')
		{
			return (0);
		}
	}
	for (count = 0; b[count] != '\0'; count++)
	{
		number <<= 1;
		if (b[count] == '1')
		{
			number += 1;
		}
	}
	return (number);
}
