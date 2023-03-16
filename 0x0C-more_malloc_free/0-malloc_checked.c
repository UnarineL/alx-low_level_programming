#include <stdlib.h>

/**
 * malloc_checked - allocates memery
 * @b: amount of memory to allocate
 *
 * Return: pointer or termination with status value 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
