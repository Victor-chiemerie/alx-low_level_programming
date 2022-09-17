#include "main.h"
/**
 * print_diagonal - prints a diagonal line as output, the length of the line is determined by the input given
 *
 *Return: there is no return value
 */
void print_diagonal(int n){
    if(n>0){
        int i;
        for (i = 0; i < n; i++)
        {
            int j;
            for(j=0; j<i; j++){
                _putchar(' ');
            }
            _putchar('\\');
            _putchar('\n');
        }
    }
    else
    {
        _putchar('\n');
    }
}
