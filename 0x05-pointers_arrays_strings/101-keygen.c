#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/**
 * main - generates random passwords
 *
 * Return: 0 always
 */
int main(void)
{
	int counter = 0;
    	char randChar;
    	int  passwordLength;

	srandom(time(NULL));
	passwordLength = 10;

    	while(counter < passwordLength)
    	{
        	randChar = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789"[random () % 62];
        	printf("%c", randChar);
        	counter++;
   	}
    	printf("\n"); 
    	return 0;
}
