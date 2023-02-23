#include <ctype.h>

/**
 * _isdigit - checks digit from o to 9
 * @c: takes arg to check if its true
 *
 * Return: 1 if true and 0 if false
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
