#include "lists.h"

/**
 * dlistint_len - returns number of nodes
 * in giving dbly linked list
 * @h: head
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	for (; h != NULL; len++)
		h = h->next;
	return (len);
}
