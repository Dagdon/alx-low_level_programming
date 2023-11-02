#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of memoery blocks
 * @size: size of element
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *t;
	size_t y;

	if (nmemb == 0 || size == 0)
		return (NULL);
	t = malloc(nmemb * size);
	if (t == NULL)
		return (NULL);
	for (y = 0; y < (nmemb * size); y++)
		t[y] = 0;
	return (t);
}
