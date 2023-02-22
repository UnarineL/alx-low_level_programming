#include <stdio.h>
#include <stdlib.h>

/**
 * print_last_digit - shows the last digit of the given number
 * @num: takes argument to be printed
 *
 * Return: 0 success
 */
int print_last_digit(int num)
{
	int lastdigit;

	lastdigit = abs(num) % 10;

	return (lastdigit);
}
