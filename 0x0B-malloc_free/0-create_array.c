#include "main.h"

/**
 * create_array - a function that creates an array and inititializes it
 * @c: character to initialize array
 * @size: size of array
 * Return: NULL if size = 0 or pointer if it fails
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
	return (NULL);

	char *array(char *)malloc(size * sizeof(char));

	if (array == NULL)
	return (NULL);

	for (unsigned int = 0 ; i < size ; i++)
	{
		array[i] = c;
	}
	return (array);
}
