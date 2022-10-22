#include "lists.h"

/**
 * add_node - prints the elements of a linked list
 * @head: the pointer that points to the pointer of type list
 * @str: the string of the new node
 *
 * Return: the address to the newly added node
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int i = 0;

	while (str[i])
	{
		i++;
	}
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->str = strdup(str);
	temp->len = i;
	temp->next = *head;
	*head = temp;
	return (temp);
}
