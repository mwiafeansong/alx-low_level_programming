#include "lists.h"

/**
 * sum_listint - finds sum of all data of a linked list
 * @head: singly linked list
 *
 * Return: sum of all data (n) of the linked list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
