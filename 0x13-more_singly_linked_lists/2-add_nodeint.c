#include "lists.h"

/**
 * add_nodeint - adds node to beginning of a list
 * @head: pointer to new node
 * @n: int to be created
 * Return: address of new element or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (0);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
		new->next = NULL;
	else
		new->next = *head;
	new->n = n;
	*head = new;

	return (0);
}
