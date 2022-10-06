#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: the number of bytes to be created
 *
 * Return: a pointer address to the memory;
 */
void *malloc_checked(unsigned int b)
{
int *value = malloc(b);
if ((*(value) == 0))
{
exit(98);
}
return (value);
}
