#include "lists.h"

/**
 * listint_len - Returns the length of a list
 * @h: - the list passed as argument
 *
 * Return: the number of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;
	const listint_t *temp;

	temp = h;
	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
