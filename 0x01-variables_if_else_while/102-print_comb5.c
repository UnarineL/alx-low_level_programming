#include <stdio.h>

/**
 * main - print combination
 *
 * Return: 0 always
 */
int main(void)
{
	int i, j;
	int first_i_digit;
	int sec_i_digit;
	int first_j_digit;
	int sec_j_digit;

	for (i = 0; i <= 99; i++)
	{
		for (j = i; j <= 99; j++)
		{
			first_i_digit = i / 10;
			sec_i_digit = i % 10;
			first_j_digit = j / 10;
			sec_j_digit = j % 10;

			putchar(first_i_digit + '0');
			putchar(sec_i_digit + '0');
			putchar(' ');
			putchar(first_j_digit + '0');
			putchar(sec_j_digit + '0');

			if (i != 99 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}


