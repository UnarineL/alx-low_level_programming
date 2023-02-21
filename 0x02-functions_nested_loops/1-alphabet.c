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
 * print_alphabet - prints alphabet when evoked
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
