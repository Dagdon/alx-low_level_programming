#include "lists.h"

/**
 * get_dnodeint_at_index - returns node of a list at a particular index
 * @head: head pointer
 * @index: index to retrive node
 * Return: node or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t itr = 0;

	for (itr = 0; itr < index; itr++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
