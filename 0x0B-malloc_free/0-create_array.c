#include <stdlib.h>

/**
 * create_array - creates array and initialize it with specific char
 * @size: size of an array
 * @c: char to initialize
 *
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	i = 0;

	if (s == NULL)
	{
		return (NULL);
	}
	s = malloc((size) * sizeof(char));

	if (s == 0)
	{
		return (NULL);
	}
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
