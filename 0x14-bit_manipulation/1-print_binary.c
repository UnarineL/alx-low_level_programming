#include "main.h"

/**
 *
 * base_expo - calculates power of base
 * @b: base of the exponent
 * @p: power
 *
 * Return: exponent value
 */
unsigned long int base_expo(unsigned int b, unsigned int p)
{
	unsigned long int n;
	unsigned int i;

	n = 1;
	for (i = 1; i <= p; i++)
	{
		n *= b;
	}
	return (n);
}

/**
 * print_binary - prints binary
 * @n: print number
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int div;
	unsigned long int rev;
	char f;

	f = 0;
	div = base_expo(2, sizeof(unsigned long int) * 8 - 1);

	while (div != 0)
	{
		rev = n & div;
		if (rev == div)
		{
			f = 1;
			_putchar ('1');
		}
		else if (f == 1 || div == 1)
		{
			_putchar ('0');
		}
		div >>= 1;
	}
}
