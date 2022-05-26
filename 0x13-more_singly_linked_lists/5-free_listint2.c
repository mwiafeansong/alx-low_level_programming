#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to singly linked list
 *
 * Return: None
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;
	listint_t *ptr2;

	if (head != NULL)
	{
		ptr2 = *head;
		while ((ptr = ptr2) != NULL)
		{
			ptr2 = ptr2->next;
			free(ptr);
		}
		*head = NULL;
	}
}
