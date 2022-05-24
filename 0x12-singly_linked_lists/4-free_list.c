#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to first element of list
 *
 * Return: None
 */

void free_list(list_t *head)
{
	list_t *ptr = head;

	while (ptr != NULL)
	{
		head = head->next;
		free(ptr->str);
		free(ptr);
		ptr = head;
	}
}
