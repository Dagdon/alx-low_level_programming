#include "lists.h"

/**
 * add_nodeint_end - adds node to end of list
 * @head: head pointer
 * @n: new integer
 * Return: address of new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *tmp;

	(void)tmp;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	tmp = *head;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new_node;
	}
	return (*head);
}
