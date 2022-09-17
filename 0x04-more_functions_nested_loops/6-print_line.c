#include "main.h"
/**
 * print_line - prints a line as output, length of the line is determine by the value input
 *
 * Return: there is no return value
 */
void print_line(int n){
    if(n>0){
        int i;
        for (i = 0; i < n; i++)
        {
            _putchar('_');
        }
    }
    _putchar('\n');
}
