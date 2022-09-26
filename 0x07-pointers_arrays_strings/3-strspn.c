#include "main.h"
/**
 * _strspn - the first occurrence of a character in s that is not contained in the set of characters that is specified by accept  
 * @s: the string to be searched
 * @accept: the string that is being searched for
 *
 * Return: the last index in s where the string accept can be found.
 */
unsigned int _strspn(char *s, char *accept)
{
        int i = 0;
        int j;
        unsigned int count = 0;
        while (*(s + i))
        {
            if (i > count)
            {
                    break;
            }
                j = 0;
                while (*(accept + j))
                {
                        if (*(s + i) == *(accept + j))
                        {
                                count++;
                                break;
                        }
                        j++;  
                }
                i++;
        }
        return (count);
}
