#include <stdio.h>

/**
 * times_table - times table of 9
 */
void times_table(void)
{
    	int row;
       	int column; 
	int product;

    	for (row = 0; row <= 9; row++)
    	{
        for (column = 0; column <= 9; column++)
		{
           		product = row * column;
            		printf("%d,", product);
		}
		printf("$\n");
	}
}
