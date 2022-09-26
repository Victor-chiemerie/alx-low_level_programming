#include "main.h"
/**
 * _memset - function sets the first count bytes of s to the value b
 * @s: the address of the memory to be changed
 * @b: the character that the address should be changed to
 * @n: the size of the memory to change
 *
 * Return: a pointer to s.
 */
char *_memset(char *s, char b, unsigned int n)
{
        int i;
	int h = n;
        for ( i = 0; i < h; i++)
        {
                *(s + i) = b;
        }
        return (s);
}
