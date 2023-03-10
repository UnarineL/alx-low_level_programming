#include <string.h>

/**
* _strstr - locates a substring
* @haystack: source of the string
* @needle: substring
*
* Return: pointer
*/
char *_strstr(char *haystack, char *needle)
{
	char *h_ptr;
	char *n_ptr;

	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		h_ptr = haystack;
		n_ptr = needle;

		while (*n_ptr != '\0' && *h_ptr == *n_ptr)
		{
			h_ptr++;
			n_ptr++;
		}
		if (*n_ptr == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
