#include <stdio.h>
#include "main.h"

/**
* main - Entry point
*
* Return: 0 always.
*/
int main(void)
{
	print_alphabet();
	putchar('\n');

	return (0);
}

/**
 * print_alphabet - print alphabet in lower cases
 */
void print_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
}
