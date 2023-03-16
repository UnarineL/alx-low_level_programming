#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocate memory block using malloc and free
 * @ptr: pointer
 * @old_size: previous alloc size
 * @new_size: new alloc size
 *
 * Return: ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_p;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
	{
		return (ptr);
	}

	new_p = malloc(new_size);
	if (new_p == NULL)
	{
		return (NULL);
	}

	memcpy(new_p, ptr, old_size < new_size ? old_size : new_size);
	free(ptr);

	return (new_p);
}

