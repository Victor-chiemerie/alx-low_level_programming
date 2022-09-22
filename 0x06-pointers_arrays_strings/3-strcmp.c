#include "main.h"
#include <string.h>
/**
 * _strcmp - concancates the value of the second string to the first string
 * @s_one: the first String pointer parameter
 * @s_two: the second String pointer parameter
 *
 * Return: 0 if s1 and s2 are the same; less than 0 if s1<s2; greater than 0 if s1>s2
 */
int _strcmp(char *s1, char *s2)
{
    int x = strlen(s1);
    int y = strlen(s2);
    if (x > y)
    {
        return (1);
    }
    else if (x < y)
    {
        return (-1);
    }
    else return (0);
}
