#include "main.h"
#include <string.h>
/**
 * leet - converts some alphabets in a string to a numeral
 * @s: the string to be converted
 * 
 * Return: the converted string
 */
char *leet(char * s)
{
    int n = strlen(s);
    int i;
    int j;
    char letter[] = {'A', 'E', 'O', 'T', 'L'};
    char num[] = {'4', '3', '0', '7', '1'};

    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            if((*(s + i) == letter[j]) || (*(s + i) == (letter[j] + 32)))
            {
                *(s + i) = num[j];
            }
        }
    }
    return s;
}
