#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints min number of coins to make change for amount of money
 * @argv: array count
 * @argc: count of args
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int cents;
	int num_coins;
	int coins[] = {25, 10, 5, 2, 1};

	num_coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (0);
	}

	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		num_coins += cents / coins[i];
		cents %= coins[i];
	}
	printf("%d\n", num_coins);
	return (0);
}
