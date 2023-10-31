#include "main.h"

/**
 * _strdup - a function that copies a string
 * @str: copied string
 * Return: pointer to new memory
 */

char *_strdup(char *str)
{
	int i;
	char *dup;
	int num = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		num++;

	dup = malloc(sizeof(char) * num + 1);

	if (dup == NULL)
		return (NULL);
	for (i = 0 ; str[i] != '\0' ; i++)
		dup[i] = str[i];
	return (dup);
}
