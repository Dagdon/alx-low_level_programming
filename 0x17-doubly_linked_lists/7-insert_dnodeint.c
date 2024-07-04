#include "lists.h"

/**
 * insert_dnodeint_at_index  - insert node at particular index
 * @idx: index for node to be inserted
 * @h: double pointer to head
 * @n: new node
 * Return: pointer to new node or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *new;
	size_t count = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));
	for (count = 0; count < idx; count++)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
		tmp = tmp->next;
	}

	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = tmp;
	new->next = tmp->next;
	tmp->next->prev = new;
	tmp->next = new;

	return (new);
}
