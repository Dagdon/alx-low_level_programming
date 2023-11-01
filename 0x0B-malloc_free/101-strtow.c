#include "main.h"

/**
 * ch_free_grid - main
 * @grid: input
 * @height: input
 */

void ch_free_grid(char **grid, size_t height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
		free(grid[height]);
			free(grid[height]);
		free(grid);
	}
}
/**
 * strtow - splits a string in two
 * @str: string
 * Return: a pointer
 */

char **strtow(char *str)
{
	char **out;
	size_t t, height, a, b, l;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (t = height = 0; str[t] != '\0'; t++)
		if (str[t] != ' ' && (str[t + 1] == ' ' || str[t + 1] == '\0'))
		height++;
	{
		out = malloc((height + 1) * sizeof(char *));

		if (out == NULL || height == 0)
		{
			free(out);
			return (NULL);
		}
	for (a = l = 0; a < height; a++)
	{
		for (t = l; str[t] != '\0'; t++)
		{
			if (str[t] == ' ')
				l++;
			if (str[t] != ' ' && (str[t + 1] == ' ' || str[t + 1] == '\0'))
			{
				out[a] = malloc((t - l + 2) * sizeof(char));
				if (out[a] == NULL)
				{
					ch_free_grid(out, a);
					return (NULL);
				}
				break;
			}
		}
		for (b = 0; l <= t; l++, b++)
			out[a][b] = str[l];
		out[a][b] = '\0';
	}
	}
	out[a] = NULL;
	return (out);
}
