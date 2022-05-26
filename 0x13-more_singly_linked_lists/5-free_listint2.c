#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to singly linked list
 *
 * Return: None
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr = *head;
	listint_t *ptr2 = *head;

	if (head != NULL)
	{
		while (ptr != NULL)
		{
			ptr2 = ptr2->next;
			free(ptr);
			ptr = ptr2;
		}
		*head = NULL;
	}
}
