#include "main.h"

/**
 * create_array - a function that creates an array and inititializes it
 * @c: character to initialize array
 * @size: size of array
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);
	for (i = 0;  i < size; i++)
		array[i] = c;
	return (array);
}
