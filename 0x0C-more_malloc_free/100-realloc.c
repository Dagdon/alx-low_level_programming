#include "main.h"

/**
 * _realloc - reaalocates a memory block
 * @ptr: pointer to old memory
 * @old_size: old size
 * @new_size: new size
 * Return: pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pt;
	size_t ii, max = new_size;
	char *oldp = ptr;

	if (ptr == NULL)
	{
		pt = malloc(new_size);
			return (pt);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	pt = malloc(new_size);
		if (pt == NULL)
			return (NULL);
	if (new_size > old_size)
		max = old_size;
	for (ii = 0; ii < max; ii++)
		pt[ii] = oldp[ii];
	free(ptr);
	return (pt);
}
