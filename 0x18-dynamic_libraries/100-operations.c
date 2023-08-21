#include <stdio.h>

/**
 * add - adds two numbers
 * @a: first arg
 * @b: second arg
 *
 * Return: addition of a and b
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - subtract a from b
 * @a: first arg
 * @b: second arg
 *
 * Return: Subtraction
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - multiplication of a and b
 * @a: first arg
 * @b: second arg
 *
 * Return: multiplication
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - divide two numbers
 * @a: first arg
 * @b: second arg
 *
 * Return: division of a and b
 */
int div(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}
	else
	{
		return (0);
	}
}

/**
 * mod - modulo
 * @a: first arg
 * @b: second arg
 *
 * Return: modulo of a and b
 */
int mod(int a, int b)
{
	if (b != 0)
	{
		return (a % b);
	}
	else
	{
		return (0);
	}
}
