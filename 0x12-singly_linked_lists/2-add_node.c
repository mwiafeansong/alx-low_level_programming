#include "lists.h"

/**
 * add_node - adds new node to beginning of list_t list
 * @head: pointer to headd
 * @str: string to be stored
 *
 * Return: address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t i;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (i = 0; str[i] != '\0'; i++)
		;
	new->len = i;

	new->next = *head;

	*head = new;

	return (*head);
}
