/**
 * _pow_recursion - prints the value of x raised to the power y
 * @x: arg as value to raise
 * @y: arg as value to raise to
 *
 * Return: Value of x raised to y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
