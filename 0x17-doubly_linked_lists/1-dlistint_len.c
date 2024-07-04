#include "lists.h"

/**
 * dlistint_len - prints elements of a dlistint_t list
 * @h: head pointer
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t elements_no = 0;

	while (h)
	{
		elements_no += 1;
		h = h->next;
	}
	return (elements_no);
}
