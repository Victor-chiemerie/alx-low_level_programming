#include "main.h"
/**
 * _puts_recursion - prints a string
 * @s: the string to be printed
 * 
 * Return: there is no return value
 */
void _puts_recursion(char *s)
{
        int n = 0;
        if (*(s + n))
        {
                _putchar(*(s + n));
                n++;
                _puts_recursion(s + n);
        }
	else
	  _putchar('\n');
}
