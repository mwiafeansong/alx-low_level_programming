#include "lists.h"

/**
 * get_nodeint_at_index - finds nth node of listint_t list
 * @head: singly linked list
 * @index: position of node to be returned
 *
 * Return: node at index position
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int i;
	listint_t *ptr = head;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		if (ptr == NULL)
			return (NULL);
		ptr = ptr->next;
	}

	return (ptr);
}
