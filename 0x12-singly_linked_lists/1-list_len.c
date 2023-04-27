#include "lists.h"

/**
 * list_len - counts number of node per list
 * @h: root of list
 *
 * Return: length of list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
