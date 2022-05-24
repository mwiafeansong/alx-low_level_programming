#include "lists.h"

/**
 * add_node_end - adds a new node to end of a list
 * @head: pointer to head
 * @str: string to store
 *
 * Return: address of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *ptr;
	size_t i;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		;
	new->len = i;
	new->next = NULL;

	ptr = *head;
	if (ptr == NULL)
	{
		*head = new;
	}
	else
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = new;
	}

	return (*head);
}
