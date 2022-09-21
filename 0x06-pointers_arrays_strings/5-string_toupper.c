#include "main.h"
#include <string.h>
/**
 * string_toupper - converts lowercase alphabets to uppercase
 * @g: the string to be converted
 * 
 * Return: the converted string
 */
char *string_toupper(char * g)
{
    int n = strlen(g);
    int i;
    for ( i = 0; i < n; i++)
    {
        if ((*(g + i) > 96) & (*(g + i) < 123))
        {
            *(g + i) = *(g + i) - 32;
        }
    }
    return g;
}
