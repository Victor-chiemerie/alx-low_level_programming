#include "lists.h"

/**
 * free_listint - removes all the nodes in a list
 * @head: the pointer to the first node of the list
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;
	if (temp->next != NULL)
	{
		free_listint(temp->next);
	}
	free(temp);
}
