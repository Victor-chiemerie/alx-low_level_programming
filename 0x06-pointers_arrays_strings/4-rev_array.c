#include "main.h"
/**
 * reverse_array - this function reverses the contents of an array
 * @a: the array collection
 * @n: the length of the array
 * 
 * Return: there is no return value
 */
void reverse_array(int *a, int n)
{
    int x = n / 2; // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337
    int y;
    int i;
    int j = n - 1;
    for ( i = 0; i < x; i++)
    {
        y = *(a + i);
        *(a + i) = *(a + j);
        *(a + j) = y;
        j--;
    }
}
