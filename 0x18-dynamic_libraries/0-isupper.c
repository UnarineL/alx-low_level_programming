#include <ctype.h>

/**
 * _isupper - check if the alphabet is uppercase
 * @c: takes args to be checked by the function
 *
 * Return: 1 if true or 0 if false
 */
int _isupper(int c)
{
	int check_alpha;

	check_alpha = isupper(c);

	if (check_alpha)
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (0);
}
