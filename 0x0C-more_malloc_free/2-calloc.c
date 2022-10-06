#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
int i = 0;

array = (char *)malloc(nmemb * size);
if (array == 0)
{
return (NULL);
}
while (*(array + i))
{
*(array + i) = 0;
i++;
}
return (array);
}
