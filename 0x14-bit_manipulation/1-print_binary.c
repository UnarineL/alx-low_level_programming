#include "main.h"

/**
 * base_power - calculate the power of the base number
 * @base_num: the base num
 * @expo_num: the exponent
 *
 * Return: value of base to the exponent
 */
unsigned long int base_power(unsigned int base_num, unsigned int expo_num)
{
	unsigned long int number;
	unsigned int count;

	number = 1;
	for (count = 1; count <= expo_num; count++)
	{
		number *= base_num;
	}
	return (number);
}

/**
 * print_binary - prints the binary represantation of a number
 * @n: number to print
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int div, rev;
	char f;

	f = 0;
	div = base_power(2, sizeof(unsigned long int) * 8 - 1);
	while (div != 0)
	{
		rev = n & div;
		if (rev == div)
		{
			f = 1;
			_putchar('1');
		}
		else if (f == 1 || div == 1)
		{
			_putchar('0');
		}
		div >>= 1;
	}
}
