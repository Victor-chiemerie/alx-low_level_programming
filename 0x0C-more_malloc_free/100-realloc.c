#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - a function that reallocates a memory block
 * @ptr: the pointer to the old memory address
 * @old_size: the size of the old memory
 * @new_size: the size of the new memory
 *
 * Return: a pointer to the new memory address
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *new_memory;
unsigned int i = 0, my_size;

if (old_size == new_size)
{
return (ptr);
}
if ((new_size == 0) & (ptr != NULL))
{
free(ptr);
return (NULL);
}
if (old_size < new_size)
{
my_size = old_size;
}
else
{
my_size = new_size;
}
new_memory = malloc(new_size);
if (new_memory == NULL)
{
return (NULL);
}
while ((i < my_size) &(ptr != NULL))
{
*(new_memory + i) = *((char *)ptr + i);
i++;
}
free(ptr);
return (new_memory);
}

