#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - a function that creates an array of integers
 * @min: the minimum value of the array
 * @max: the maximum value of the array
 *
 * Return: the pointer to the array
 */
int *array_range(int min, int max)
{
int i, range, *num;
range = (max - min) + 1;

if (min > max)
{
return (NULL);
}
num = malloc(sizeof(int) * range);
if (num == 0)
{
return (NULL);
}
for ( i = 0; i < range; i++)
{
*(num + i) = min;
min++;
}
return (num);
}
