#include <stdio.h>

/**
 * print_alphabet_x10 - prints alphabets 10x
 */
void print_alphabet_x10(void)
{
	int i;
	char ch;
	
	i = 48;

	while (i <= 57)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			putchar(ch);
			ch++;
		}
		putchar('\n');
		i++;
	}
}
