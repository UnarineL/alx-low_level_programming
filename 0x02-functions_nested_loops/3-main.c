#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _isLower('H');
    _putchar(r + '0');
    r = _isLower('o');
    _putchar(r + '0');
    r = _isLower(108);
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}
