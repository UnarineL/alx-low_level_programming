#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prints opcodes of its own main function
 * @argc: arguments count
 * @argv: array of counts
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	char *start;
	char *end;
	int num_of_opcodes;
	int num_of_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num_of_bytes = atoi(argv[1]);
	if (num_of_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	start = (char *)main;
	end = (char *)(main + num_of_bytes);
	num_of_opcodes = end - start;

	for (i = 0; i < num_of_opcodes; i++)
	{
		if (i > 0 && i < num_of_opcodes - 1)
		{
			printf(" ");
		}
		printf("%02x", start[i] & 0xff);
	}
	printf("\n");
	return (0);
}
