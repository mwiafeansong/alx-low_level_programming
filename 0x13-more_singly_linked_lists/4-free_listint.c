#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: singly linked list
 *
 * Return: None
 */

void free_listint(listint_t *head)
{
	listint_t *ptr = head;

	while (ptr != NULL)
	{
		head = head->next;
		free(ptr);
		ptr = head;
	}
}
