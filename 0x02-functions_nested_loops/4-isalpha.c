#include "main.h"
#include <ctype.h>

/**
 * _isalpha - added function
 *
 * Return: 0 and 1 (success)
 */
/*@parameter 'c': tke args in main*/
int _isalpha(int c)
{
	int isalpha;
	int notalpha;

	isalpha = 1;
	notalpha = 0;

	if (isalpha(c))
	{
		return (isalpha);
	}
	else
	{
		return (notalpha);
	}
	return (0);
}
