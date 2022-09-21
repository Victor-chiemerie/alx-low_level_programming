#include "main.h"

/**
 * print - prints out the value of an integer
 * @n: parameter to be printed
 * 
 * Return: there is no return value
 */
void print_number(int val)
{
  int rem;
  if(val < 0)
    {
        val = val * -1;
        _putchar('-');
    }
    if(val > 9)
    {
        print_number(val / 10);
        rem = val % 10;
        _putchar('0' + rem);
    }
    else
    {
        _putchar('0' + val);
    }
}
