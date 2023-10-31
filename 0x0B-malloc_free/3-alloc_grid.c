#include "main.h"

/**
 * alloc_grid - return a pointer to two dimensional array
 * @width: column
 * @height: rows
 * Return: pointer
 */

int **alloc_grid(int width, int height)
{
	int **out;
	int j;
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);

	out = malloc(sizeof(int *) * height);

	if (out == NULL)
		return (NULL);

	for (j = 0; j < height ; j++)
	{
		out[j] = malloc(sizeof(int) * width);

		if (out[j] == NULL)
		{
			free(out);
			for (i = 0; i <= height; i++)
				free(out[i]);
			return (NULL);
		}
		for (i = 0; i < width; i++)
			out[j][i] = 0;
	}
	return (out);
}
