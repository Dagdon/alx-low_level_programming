#include "lists.h"

/**
 * pop_listint - deletes head of a node
 * @head: head pointer
 */

int pop_listint(listint_t **head)
{
	int a;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);
	a = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (a);
}
