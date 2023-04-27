#include "lists.h"

/**
 * print_list - print linked list
 * @h: header of linked list
 *
 * Return: number of printed line
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *curr = h;

	while (curr != NULL)
	{
		if (curr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", curr->len, curr->str);
		curr = curr->next;
		count++;
	}

	return (count);
}
