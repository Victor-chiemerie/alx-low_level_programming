#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - iterates through an array
 * @array: the array to be iterated
 * @size: the number of elements in the array
 * @action: a pointer to a function to be executed
 *
 * Return: nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if ((action) && (array) && (size > 0))
	{
		for (i = 0; i < size; i++)
		{
			action(*(array + i));
		}
	}
}
