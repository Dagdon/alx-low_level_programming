#include "lists.h"

/**
 * list_len - finds the lenght of a list
 * @h: node's head
 * Return: node's lenght
 */

size_t list_len(const list_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		h = h->next;
		node++;
	}
	return (node);
}
