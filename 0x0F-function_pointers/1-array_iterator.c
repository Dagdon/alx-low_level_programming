#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function
 * @array: array
 * @size: size
 * @action: pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
		return;

	for (a = 0; a < size; a++)
	{
		action(*array);
		array++;
	}
}
