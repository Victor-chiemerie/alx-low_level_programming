#include "lists.h"

/**
 * print_listint - prints all the elments of a list
 * @h: - the list passed as argument
 *
 * Return: the number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;
	const listint_t *temp;

	temp = h;
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}
	return (count);
}
