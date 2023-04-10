#include "main.h"

/**
 * get_endianness - check endianness
 *
 * Return: 0 if big endian, 1 id little endian
 */
int get_endianness(void)
{
	int val;
	char *c;

	val = 1;
	c = (char *)&val;
	return (*c);
}
