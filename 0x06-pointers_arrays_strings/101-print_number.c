#include "main.h"
#include <stdio.h>

/**
 * print_number - print an integer
 * @n: takes integer  
 *
 */
void print_number(int n)
{
	if (n < 0)
	{
		putchar('-');
		if (n == -128)
		{
			print_number(128);
			putchar('8');
			return;
		}
		n = -n;
	}
	else if (n / 10 != 0)
	{
		print_number(n / 10);
	}
	putchar((n % 10) + '0');
}
