#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t list
 * @head: pointer to singly linked list
 *
 * Return: head node's data (n)
 */

int pop_listint(listint_t **head)
{
	int num1;
	listint_t *ptr = *head;
	listint_t *new_head;

	if (*head == NULL)
		return (0);

	num1 = ptr->n;
	new_head = ptr->next;
	free(ptr);
	*head = new_head;

	return (num1);
}
