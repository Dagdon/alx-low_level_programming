#include "lists.h"

/**
 * listint_len - returns number of elements in a list
 * @h: pointer to header
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t coun = 0;

	if (h == NULL)
		return (0);
	for (coun = 0; h != NULL; coun++)
	{
		h = h->next;
	}
	return (coun);
}
