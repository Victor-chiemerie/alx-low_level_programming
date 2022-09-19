#include <string.h>
#include "main.h"
/**
 * puts2 - prints the value of a string but jumps one character each time
 * @str: the String parameter
 * 
 * Return: there is no return value
 */
void puts2(char *str)
{
    int i;
    int n = strlen(str);
    for(i = 0; i < n; i += 2)
    {
        _putchar(str[i]);
    }
    _putchar('\n');
}
