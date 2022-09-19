#include "main.h"
#include <string.h>
/**
 * _puts - prints the value of the string pointer parameter
 * @str: the String parameter
 * 
 * Return: there is no return value
 */
void _puts(char *str)
{
    int i;
    int n = strlen(str);
    for(i = 0; i < n; i++)
    {
        _putchar(str[i]);
    }
    _putchar('\n');
}
