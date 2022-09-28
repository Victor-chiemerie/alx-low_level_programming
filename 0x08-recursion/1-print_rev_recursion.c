#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: the string to be printed
 * 
 * Return: there is no return value
 */
void _print_rev_recursion(char *s)
{
        if (*(s + 0))
        {
                _print_rev_recursion(s + 1);
                _putchar(*(s + 0));
        } 
}
