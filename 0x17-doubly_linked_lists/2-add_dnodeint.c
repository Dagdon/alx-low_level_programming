#include "lists.h"

/**
 * add_dnodeint - add a new node at the front of a dlist
 * @head: double pointer of the head list
 * @n: new node
 * Return: pointer to the new list
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	/* new node created */
	new->next = *head;
	if (*head != NULL)
	{
		(*head)->prev = new;
	}
	*head = new;
	return (*head);
}
