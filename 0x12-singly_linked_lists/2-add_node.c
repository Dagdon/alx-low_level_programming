#include "lists.h"

/**
 * add_node - adds node to the beginnning
 * @head: head of node
 * @str: string
 * Return: address of new node or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int a, coun = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	for (a = 0; str[a] != '\0'; a++)
		coun++;
	new->len = coun;
	new->next = *head;
	*head = new;

	return (*head);
}
