#include "function_pointers.h"

/**
 * int_index - a function that searches for an int
 * @array: array
 * @size: size
 * @cmp: pointer
 * Return: anything
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]) != 0)
			return (a);
	}
	return (-1);
}
