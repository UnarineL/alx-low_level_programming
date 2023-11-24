#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the char c to stdout
 * @c: The char to print
 *
 * Return: 1 on success or -1 on error
 */
int puthcar(char c)
{
	return (write(1, &c, 1));
}
