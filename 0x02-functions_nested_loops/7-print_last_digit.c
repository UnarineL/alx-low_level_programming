# include <stdio.h>


/**
 * print_last_digit - shows the last digit of the given number
 * @c: takes argument to be printed
 *
 * Return: 0 success
 */
int print_last_digit(int num)
{
	int lastdigit;

	lastdigit = num % 10;
	return lastdigit;
}
