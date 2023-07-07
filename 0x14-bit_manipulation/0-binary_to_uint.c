#include "main.h"

/**
 * binary_to_uint - convert a binary number to unsigned int
 * @b: pointer to string of binary number1
 *
 * Return: unsigned int or 0 if error occured
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int n;

	n = 0;
	if (!b)
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		n <<= 1;
		if (b[i] == '1')
		{
			n += 1;
		}
	}
	return (n);
}
