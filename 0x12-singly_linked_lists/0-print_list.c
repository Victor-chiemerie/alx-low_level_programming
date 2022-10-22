#include "lists.h"

/**
 * print_list - prints the elements of a linked list
 * @h: the pointer to the first element
 *
 * Return: the number of elements
*/
size_t print_list(const list_t *h)
{
	int count = 0;
	const list_t *temp;

	temp = h;
	while (temp)
	{
		if (temp->str)
		{
			printf("[%u] %s\n", temp->len, temp->str);
		}
		else
			printf("[0] (nil)\n");
		temp = temp->next;
		count++;
	}
	return (count);
}
