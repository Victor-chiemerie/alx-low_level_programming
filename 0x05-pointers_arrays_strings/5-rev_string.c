#include <string.h>
#include "main.h"
/**
 * rev_string - reverses the value of string using pointer address
 * @s: the String parameter
 * 
 * Return: there is no return value
 */
void rev_string(char *s)
{
    int i;
    int j;
    int k;
    int n = strlen(s);
    int half = n/2;
    j = n - 1;
    for ( i = 0; i < half; i++)
    {
        k = *(s + i);
        *(s + i) = *(s + j);
        *(s + j) = k;
        j--;
    }
}
