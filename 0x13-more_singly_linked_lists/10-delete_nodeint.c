#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index specified
 * @head: pointer to singly linked list
 * @index: position of node to delete
 *
 * Return: 1 (Success) or -1 (Failure)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *ptr = *head;
	listint_t *ptr2 = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		ptr = ptr->next;
		free(ptr2);
		*head = ptr;
	}
	else
	{
		for (i = 0; i < index - 1; i++)
		{
			if (ptr == NULL)
				return (-1);
			ptr = ptr->next;
		}
		ptr2 = ptr->next;
		ptr->next = ptr2->next;
		free(ptr2);
	}

	return (1);
}
