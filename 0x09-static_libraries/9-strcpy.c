#include <string.h>
#include "main.h"
/**
 * _strcpy - copies the string value of the second parrameter and assigns it to the first value
 * @dest: the first string parameter
 * @src: the second string parameter
 * 
 * Return: there is no return value
 */
char *_strcpy(char *dest, char *src)
{
    int i, x = strlen(src);
    for(i = 0; i < x; i++){
        *(dest + i) = src[i];
    }
    return (src);
}
