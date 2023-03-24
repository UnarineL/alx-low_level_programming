#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: the number of parameters
 * @...: the parameters to sum
 *
 * Return: the sum of all the parameters, or 0 if n is 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	va_list args;
	unsigned int i;

	sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
