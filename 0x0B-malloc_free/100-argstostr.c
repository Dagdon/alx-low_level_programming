#include "main.h"

/**
 * argstostr - a function that concatates all the arguements of my program
 * @ac: arguement
 * @av: arguement
 * Return: pointer
 */

char *argstostr(int ac, char **av)
{
	char *out;
	int a, b, c, l = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			l++;
	}
	l += ac;

	out = malloc(sizeof(char) * l + 1);
	if (out == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			out[c] = av[a][b];
		c++;
	}
	if (out[c] == '\0')
	{
		out[c++] = '\n';
	}
	return (out);
}
