#include "function_pointers.h"
/**
 * int_index - searches for a number in ana array
 * @array: the array to be iterated
 * @size: the number of elements in the array
 * @cmp: a pointer to a function to be executed
 *
 * Return: the index of the number searched
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp && (size > 0) && array)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(*(array + i)))
			{
				return (i);
			}
		}
	}
	return (-1);
}
