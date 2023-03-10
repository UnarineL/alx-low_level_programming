#include <stdio.h>

/**
 * main - checks the name of the file
 * @argc: arguments coun in command line
 * @argv: array of args in count
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
