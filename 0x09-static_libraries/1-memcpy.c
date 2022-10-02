#include "main.h"
/**
 * _memset - function sets the first count bytes of s to the value b
 * @dest: the address of the memory to be changed
 * @src: the character that the address should be changed to
 * @n: the size of the memory to change
 *
 * Return: a pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
        int i;
	int h = n;
        for ( i = 0; i < h; i++)
        {
                *(dest + i) = *(src + i);
        }
        return (dest);
}
