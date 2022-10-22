#include "lists.h"

/**
 * list_len - prints the elements of a linked list
 * @h: the pointer to the first element
 *
 * Return: the number of elements in a list
*/
size_t list_len(const list_t *h)
{
	int count = 0;
	const list_t *temp;

	temp = h;
	while (temp)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
