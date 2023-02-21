#include "main.h"

/**
 * print_alphabet - print alphabet in lower cases
 */
void print_alphabet(void);

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
