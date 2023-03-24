#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 *
 * Description: This function prints anything based on a list of types of
 * arguments passed to it. The function can handle the following types of
 * arguments:
 *
 *   c: char
 *   i: integer
 *   f: float
 *   s: char * (if the string is NULL, print (nil) instead)
 *
 * Any other character in the format string should be ignored.
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	const char *p = format;
	char *s_val, c_val;
	double d_val;
	int first_arg, i_val;

	first_arg = 1;

	if (format == NULL)
	{
		return;
	}
	va_start(ap, format);
	while (*p)
	{
		switch (*p)
		{
			case 'c':
				c_val = va_arg(ap, int);
				printf("%s%c", first_arg ? "" : ", ", c_val);
				break;
			case 'i':
				i_val = va_arg(ap, int);
				printf("%s%d", first_arg ? "" : ", ", i_val);
				break;
			case 'f':
				d_val = va_arg(ap, double);
				printf("%s%f", first_arg ? "" : ", ", d_val);
				break;
			case 's':
				s_val = va_arg(ap, char *);
				if (s_val == NULL)
				{
					s_val = "(nil)";
				}
				printf("%s%s", first_arg ? "" : ", ", s_val);
				break;
			default:
				p++;
				continue;
		}
		first_arg = 0;
		p++;
	}
	printf("\n");
	va_end(ap);
}
