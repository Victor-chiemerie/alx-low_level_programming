#include <stdio.h>
#include "main.h"
/**
 * print_array - prints the elements of an array
 * @a: the array parameter
 * @n: the size of the array
 * 
 * Return: there is no return value
 */
void print_array(int *a, int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("%d", *(a + i));
        if(i == (n-1))
        break;
        else printf(", ");
    }
    putchar('\n');
}
