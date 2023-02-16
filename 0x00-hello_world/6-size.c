#include <stdio.h>

int main(void)
{
	int i;
	char c;
	float f;
	long int lI;
	long long int lLI;

	printf("Size of a char: %ld byte(s) \n", (unsigned long)sizeof(c));
	printf("Size of an int: %ld byte(s) \n", (unsigned long)sizeof(i));
	printf("Size of a long int: %ld byte(s) \n", (unsigned long)sizeof(lI));
	printf("Size of a long long int: %ld byte(s) \n", (unsigned long)sizeof(lLI));
	printf("Size of a float: %ld byte(s) \n", (unsigned long)sizeof(f));

	return (0);
}
