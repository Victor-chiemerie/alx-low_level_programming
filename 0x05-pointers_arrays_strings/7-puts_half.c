#include <string.h>
#include "main.h"
/**
 * puts_half - prints the the second half of a string value
 * @str: the String parameter
 * 
 * Return: there is no return value
 */
void puts_half(char *str)
{
    int i;
    int n = strlen(str);
    int half = n / 2;
    for(i = half; i < n; i++)
    {
        _putchar(str[i]);
    }
    _putchar('\n');
}
