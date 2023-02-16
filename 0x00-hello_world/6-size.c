#include <stdio.h>

int main(void)
{
	int intType;
	char charType;
	float floatType;
	long int longIntType;
	long long int longLongIntType;

	printf("Size of a char: %ld byte(s) \n", (unsigned long)sizeof(charType));
	printf("Size of an int: %ld byte(s) \n", (unsigned long)sizeof(charType));
	printf("Size of a long int: %ld byte(s) \n", (unsigned long)sizeof(longIntType));
	printf("Size of a long long int: %ld byte(s) \n", (unsigned long)sizeof(longLongIntType));
	printf("Size of a float: %ld byte(s) \n", (unsigned long)sizeof(floatType));

	return (0);
}
