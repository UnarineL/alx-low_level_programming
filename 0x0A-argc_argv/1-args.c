#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints number of args
 * @argc: arguments count
 * @argv: arguments array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int arg;
	int i;

	printf("%d\n", argc - 1);
	for (i = 1; i < argc; i++)
	{
		arg = atoi(argv[i]);
		arg++;
	}
	return (0);
}
