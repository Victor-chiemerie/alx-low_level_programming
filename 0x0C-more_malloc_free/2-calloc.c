#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: the number of the array elements
 * @size: the size of array type
 *
 * Return: pointer to the array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *array;
unsigned int i = 0;

if ((nmemb == 0) || (size == 0))
{
return (NULL);
}
array = malloc(nmemb * size);
if (array == 0)
{
return (NULL);
}
while (i < (nmemb * size))
{
*(array + i) = 0;
i++;
}
return (array);
}
