#include "main.h"
/**
 * print_sign - checks if a value is positive or negative or zero
 *
 * Return: there is no return value
 */
int print_sign(int n){
    int c = 12;
    if ((c>0))
    {
        _putchar('+'); 
    }
    else if(c<0)
    {
        _putchar('-');
    }
    else _putchar('0');
    return (0);
}
