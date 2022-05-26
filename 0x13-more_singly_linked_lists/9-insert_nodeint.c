#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at a given position
 * @head: pointer to singly linked list
 * @idx: position to insert new node
 * n: integer to insert
 *
 * Return: address of new node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *ptr = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		for (i = 0; i < idx - 1; i++)
		{
			if (ptr == NULL)
				return (NULL);
			ptr = ptr->next;
		}

		new->next = ptr->next;
		ptr->next = new;
	}

	return (new);
}
