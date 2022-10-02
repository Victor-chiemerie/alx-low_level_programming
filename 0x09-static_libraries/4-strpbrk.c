#include "main.h"
/**
 * _strpbrk - locates the first occurrence in the string pointed to by s of any character from the string pointed to by accept
 * @s: the string to be searched
 * @accept: the string that is being searched for
 *
 * Return: returns a pointer to the character
 */
char *_strpbrk(char *s, char *accept)
{
        int i = 0;
        int j;
        int k = 0;
        int count = 0;
        static char result[98];
        while (*(s + i))
        {
                j = 0;
                while (*(accept + j))
                {
                        if ((*(s + i) == *(accept + j)) || (count > 0))
                        {
                                result[k] = s[i];
                                count++;
                                k++;
                                break;
                        }
                        j++;  
                }
                i++;
        }
        return (result);
}
