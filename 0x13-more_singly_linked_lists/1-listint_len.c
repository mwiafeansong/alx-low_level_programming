#include "lists.h"

/**
 * listint_len - finds number of elements in a singly linked list
 * @h: singly linked list
 *
 * Return: number of elements in list
 */

size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}

	return (n);
}
