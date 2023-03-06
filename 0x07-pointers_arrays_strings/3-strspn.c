#include <string.h>
#include <stdlib.h>

/**
 * _strspn - gets the length of string prefix
 * @s: initial segment
 * @accept: bytes
 *
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
		if (accept[j] == '\0')
		{
			return (i);
		}
	}
	return (i);
}
