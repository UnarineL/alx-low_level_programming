#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * error - exit function
 */
void error(void)
{
	printf("error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: argument counts
 * @argv: args array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *num1;
	char *num2;
	int len1;
	int len2;
	int *result;
	int i, j, start;

	if (argc != 3)
	{
		error();
	}

	for (i = 1; i < 3; i++)
	{
		for (j = 0; j < (int)strlen(argv[i]); j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				error();
			}
		}
	}

	num1 = argv[1];
	num2 = argv[2];

	len1 = strlen(num1);
	len2 = strlen(num2);
	result = calloc(len1 + len2, sizeof(int));

	if (!result)
	{
		error();
	}

	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			int product = (num1[i] - '0') * (num2[j] - '0');
			int pos1 = i + j;
			int pos2 = i + j + 1;
			int sum = product + result[pos2];

			result[pos1] += sum / 10;
			result[pos2] = sum % 10;
		}
	}

	start = 0;
	while (start < len1 + len2 && result[start] == 0)
	{
		start++;
	}
	if (start == len1 + len2)
	{
		printf("0");
	}
	else
	{
		for (i = start; i < len1 + len2; i++)
		{
			printf("%d", result[i]);
		}
	}
	printf("\n");
	free(result);
	return (0);
}
