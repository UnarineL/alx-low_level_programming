#include <stdio.h>
#include "main.h"

/**
 * print_sign - checks for numbers
 * @n: takes arg to check for numbers
 *
 * Return: 0 (success)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		putchar(45);
		return (-1);
	}
	else if (n == 0)
	{
		putchar(47);
		return (0);
	}
	return (0);
}
