#include "lists.h"

/**
 * sum_dlistint - sum up all data of a list
 * @head: head pointer
 * Return: sumof data or 0
 */

int sum_dlistint(dlistint_t *head)
{
	size_t sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
