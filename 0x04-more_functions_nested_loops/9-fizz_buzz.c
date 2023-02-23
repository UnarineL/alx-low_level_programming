#include <stdio.h>

/**
 * main - Fizz buzz
 * @i: initialization of the loop
 *
 * Return: 0 always
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && !(i % 5 == 0))
		{
			printf("Fizz ");
			continue;
		}
		else if ((i % 5 == 0) && !(i % 3 == 0))
		{
			printf("Buzz ");
			continue;
		}
		else if (i % 5 == 0 && i % 3 == 0)
		{
			printf("FizzBuzz ");
			continue;
		}
		printf("%d ", i);
	}
	printf("\n");
	return (0);
}
