#include "main.h"

/**
 * array_range - creates an array of int
 * @max: maximum num of arrays
 * @min: minimum num of arrays
 * Return: pointers
 */

int *array_range(int min, int max)
{
	int a, b;
	int *p;

	if (min > max)
		return (NULL);
	b = max - min + 1;
	p = malloc(sizeof(int) * b);
	if (p == NULL)
		return (NULL);
	for (a = 0; a < b; a++)
	{
		p[a] = min;
		min++;
	}
	return (p);
}
