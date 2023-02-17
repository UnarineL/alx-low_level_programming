#include <stdio.h>

/**
 * main - print numbers using putchar
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i;
	/*use ascii codes for numbers 0-9*/
	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
