#include "main.h"

/**
* main - Check the code
*
* Return: 0 Always.
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
