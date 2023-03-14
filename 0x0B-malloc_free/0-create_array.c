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

	s = malloc((size) * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}

	if (size == 0)
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
