#include "main.h"
/**
 * print_square - display a square shape using the # character
 *
 * Return: there is no return value
 */
void print_square(int n){
    if(n>0){
        int i;
        for (i = 0; i < n; i++)
        {
            int j;
            for(j=0; j<n; j++){
                _putchar('#');
            }
            _putchar('\n');
        }
    }
    else
    {
        _putchar('\n');
    }
}
