#include "main.h"
#include <string.h>
/**
 * _strncpy - concancates the value of the second string to the first string
 * @dest: the String pointer parameter
 * @src: the second String pointer parameter
 * @n: the number of characters of the second parameter that should be added parameter
 *
 * Return: the new string
 */
char *_strncpy(char *dest, char *src, int n)
{
    int x = strlen(dest);
    int i;
    for ( i = 0; i < n; i++)
    {
        if((*(dest + x) < 0) | (*(dest + x) > 126))
        {
            break;
        }
        *(dest + i) = src[i];
    }
    return dest;
}
