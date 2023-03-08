/**
 * b_search - recursively search for the square root of a number
 * @n: the number to find the square root of
 * @l: the lower bound of the search range
 * @h: the upper bound of the search range
 *
 * Return: the natural square root of n, or -1
 */
int b_search(int n, int l, int h)
{
	int mid;
	int square;

	mid = (l + h) / 2;
	square = mid * mid;

	if (l > h)
	{
		return (-1);
	}

	if (square == n)
	{
		return (mid);
	}
	else if (square < n)
	{
		return (b_search(n, mid + 1, h));
	}
	else
	{
		return (b_search(n, l, mid - 1));
	}
}

/**
 * _sqrt_recursion - return the square root of number
 * @n: number to find sqaure root of
 *
 * Return: the natural number of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (b_search(n, 0, n));
}
