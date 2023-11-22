#include "lists.h"

/**
 * print_list - prints elements in a list
 * @h: sigly list
 * Return: nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t coun = 0;

	while (h == NULL)
		return (0);
	for (coun = 0; h != NULL; coun++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (coun);
}
