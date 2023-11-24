#ifndef _MAIN_H_
#define _MAIN_H_

int _putchar(char c);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
unsigned long int base_expo(unsigned int b, unsigned int p);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
#endif
