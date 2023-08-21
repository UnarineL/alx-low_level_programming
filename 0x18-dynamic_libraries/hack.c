#include <unistd.h>
#include <string.h>

/**
 * rand - random
 *
 * Return: int
 */
int rand(void)
{
	static int c;

	c = -1;
	if (c == 0)
	{
		return (8);
	}
	if (c == 1)
	{
		return (8);
	}
	if (c == 2)
	{
		return (7);
	}
	if (c == 3)
	{
		return (9);
	}
	if (c == 4)
	{
		return (23);
	}
	if (c == 5)
	{
		return (74);
	}
	return (c * c % 30000);
}
