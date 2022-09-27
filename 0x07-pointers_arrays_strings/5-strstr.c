#include <stddef.h>
#include "main.h"
/**
 * _strstr - finds the first occurrence of string2 in string1
 * @haystack: the string to be searched
 * @needle: the string that is being searched for
 *
 * Return: returns a pointer to the string
 */
char *_strstr(char *haystack, char *needle)
{
        int i = 0;
        int j;
        int count = 0;
        while (*(needle + i))
        {
                j = 0;
                while (*(haystack + j))
                {
                        if (*(needle + i) == *(haystack + j))
                        {
                                return (haystack + count);
                        }
                        count++;
                        j++;  
                }
                break;
        }
	return (NULL);
}
