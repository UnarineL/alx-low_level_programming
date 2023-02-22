#include <stdio.h>
#include <stdlib.h>

/**
 * print_last_digit - shows the last digit of the given number
 * @c: takes argument to be printed
 *
 * Return: 0 success
 */
int print_last_digit(int num)
{
	int lastdigit = abs(num) % 10;
	putchar(lastdigit);
	return lastdigit;
}	
