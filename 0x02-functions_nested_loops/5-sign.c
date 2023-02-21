#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * print_sign - checks for numbers
 * @n: takes arg to check for numbers
 *
 * Return: 0 (success)
 */
int print_sign(int n)
{
	int isdigit;
	int notdigit;
	int negdigit;	

	isdigit = 1;
	notdigit = 0;
	negdigit = 47; 

	if (isdigit(n > 0))
	{
		return (isdigit);
	}
	else if (isdigit(n < 0))
	{

		return (negdigit);
	}
	else if (isdigit == 0)
	{
		putchar('0');
		putchar(',');
		return (notdigit);
	}
	return (0);
}
