#include "main.h"
/**
 * print_triangle - prints a triangle to the output using the # character
 *
 * Return: there is no return value
 */
void print_triangle(int size){
  int n = size;
  if(n>0){
        int i;
        for (i = 0; i < n; i++)
        {
            int j;
            int k;
            for(j=n-1; j>i; j--){
                _putchar(' ');
            }
            for (k = 0; k <= i; k++)
            {
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
