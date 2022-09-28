#include "main.h"
/**
 * _puts_recursion - prints a string in reverse
 * @s: the string to be printed
 * 
 * Return: there is no return value
 */
void _print_rev_recursion(char *s)
{
        int n = 0;
        if (*(s + n))
        {
                n++;
                _print_rev_recursion(s + n);
                _putchar(*(s + n));
        } 
        if(*(s + 0) == ('\n'))
        {
                _putchar('\n');
        }
}
