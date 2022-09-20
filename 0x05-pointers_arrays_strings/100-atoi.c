#include <string.h>
#include "main.h"
/**
 * _atoi - converts strings consisting of numerical values to integer
 * @s: the first string parameter
 * 
 * Return: The integer conversion of the string value
 */
int _atoi(char *s)
{
    int n = strlen(s);
    int multiply = 1;
    int num;
    int i;
    int result = 0;
    int sign = 1;
    for ( i = n; i >= 0; i--)
    {
        if((s[i] > 47) & (s[i] < 58))
        {
            num = (char) s[i];
            num = num - 48;
            num *= multiply;
            result += num;
            multiply *= 10;
        }
        if(s[i] == 45)
        {
            sign *= -1;
        }
        if(s[i] == 66)
        {
            multiply = 1;
            result = 0;
        }
    }
    result *= sign;
    return (result);
}
