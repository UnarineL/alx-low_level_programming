#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints a name
 * @name: name to print
 * @f: pointer to a  function
 *
 */
void print_name(char *name, void (*f)(char *c))
{
	int i;

	f(name);

	for (i = 0; name[i] <= '\0'; i++)
	{
		printf("%d", name[i]);
	}
}
