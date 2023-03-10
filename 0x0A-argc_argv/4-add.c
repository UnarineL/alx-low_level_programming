#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints sum
 * @argv: array count
 * @argc: count
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, j;
	int sum;
	char *arg;

	sum = 0;
	if (argc == 1)
	{
		printf("%d\n", sum);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		arg = argv[i];
		for (j = 0; arg[j] != '\0'; j++)
		{
			if (!isdigit(arg[j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
