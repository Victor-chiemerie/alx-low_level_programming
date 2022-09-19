#include <string.h>
#include "main.h"
/**
 * print_rev - prints the value of the string pointer parameter in reverse
 * @s: the String parameter
 * 
 * Return: there is no return value
 */
void print_rev(char *s)
{
    int i;
    int n = strlen(s);
    for(i = n; i >= 0; i--)
    {
        _putchar(s[i]);
    }
    _putchar('\n');
} 
