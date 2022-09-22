#include "main.h"
#include <string.h>
/**
 * _strcat - concancates the value of the second string to the first string
 * @dest: the first String pointer parameter
 * @src: the second String pointer parameter
 * @n: the number of characters of the second parameter that should be added parameter
 *
 * Return: the new string
 */
char *_strncat(char *dest, char *src, int n)
{
    int x = strlen(dest);
    int i;
    for ( i = 0; i < n; i++)
    {
        if ((*(dest + x) < 0) | (*(dest + x) > 126))
        {
            break;
        }
        *(dest + x) = src[i];
        x++;
    }
    return (dest);
}
