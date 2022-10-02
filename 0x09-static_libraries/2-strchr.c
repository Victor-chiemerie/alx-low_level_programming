#include "main.h"
/**
 * _strchr - function locates the character c in the string s and returns the pointer from the first occurence
 * @s: the string to be searched
 * @c: the character that is being searched for
 *
 * Return: a string.
 */
char *_strchr(char *s, char c)
{
        int i = 0;
        int j = 0;
        int count = 0;
        static char result[98];
        while (*(s + i))
        {
                if ((s[i] == c) || (count > 0))
                {
                        result[j] = s[i];
                        count++;
                        j++;
                }
                i++;
        }
        return result;
}
