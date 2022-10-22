#include "lists.h"

/**
 * add_node_end - adds a new element to the end of a list
 * @head: the pointer that points to the pointer of type list
 * @str: the string of the new node
 *
 * Return: the address to the new element
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *new;
	int i = 0;

	while (str[i])
	{
		i++;
	}
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = i;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
	return (new);
}
