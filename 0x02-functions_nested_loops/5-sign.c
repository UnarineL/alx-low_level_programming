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
		return (putchar(43), putchar('\r'), 1);
	}
	else if (n < 0)
	{
		return (putchar(45), putchar('\r'), -1);
	}
	else if (n == 0)
	{
		return (putchar(48), putchar('\r'), 0);
	}
	return (0);
}
