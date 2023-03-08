/**
 * is_prime - help prime function check
 * @n: number to check
 * @i: recursion helper
 *
 * Return: int
 */
int is_prime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (is_prime(n, i + 1));
}
/**
 * is_prime_number - checks if input int is a prime number or not
 * @n: integer number to check
 *
 * Return: 1 if true or 0 if false
 */
int is_prime_number(int n)
{
	return (is_prime(n, 2));
}
