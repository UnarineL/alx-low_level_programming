#include <stdio.h>
#include <ctype.h>

/**
 * _islower - returns 1 if alphabet is lowercase otherwise 0
 *
 * Return: 1 if true or 0 if false
 */
int _islower(int c)
{
	int lowerCase = 0;
	int notLowerCase = 1;

	if (c >= 65 && c <= 90)
	{
		return (lowerCase);
	}
	else if (c >= 97 && c <= 122)
	{
		return (notLowerCase);
	}
	return (0);
}
