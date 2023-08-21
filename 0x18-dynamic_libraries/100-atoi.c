#include <stdio.h>
#include <limits.h>

/**
 * _atoi - converts string to interger
 * @s: takes the string argument
 *
 * Return: an int
 */
int _atoi(char *s)
{
	int i;
	int sign;
	int result;

	i = 0;
	sign = 0;
	result = 0;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
		{
			sign = -1;
		}
		else if (s[i] == '+')
		{
			sign = 1;
		}
		i++;
	}

	while (s[i] >= '0')
	{
		if (result > (INT_MAX - (s[i] - '0')) / 10)
		{
			return (sign == 1 ? INT_MAX : INT_MIN);
		}
		result = result * 10 + (s[i] - '0');
		i++;
	}
	return (result * sign);
}
