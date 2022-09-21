#include "main.h"
#include <string.h>
/**
 * _strcat - concancates the value of the second string to the first string
 * @dest: the String pointer parameter
 * @src: the String pointer parameter
 *
 * Return: the new string
 */
char *_strcat(char *dest, char *src)
{
    int x = strlen(dest);
    int y = strlen(src);
    int i;
    for ( i = 0; i < y; i++)
    {
        *(dest + x) = src[i];
        x++;
    }
    return dest;
}
