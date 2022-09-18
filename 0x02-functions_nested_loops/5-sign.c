#include "main.h"
/**
 * print_sign - checks if a value is positive or negative or zero
 * @n: the number to be checked
 *
 * Return: there is no return value
 */
int print_sign(int n){
    if ((n>0))
    {
        _putchar('+'); 
    }
    else if(n<0)
    {
        _putchar('-');
    }
    else _putchar('0');
    return (0);
}
