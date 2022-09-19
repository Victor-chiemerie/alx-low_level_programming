#include <string.h>
#include "main.h"
#include <stdio.h>
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
        putchar(str[i]);
    }
    putchar('\n');
}
