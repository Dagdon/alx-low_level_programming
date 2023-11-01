#include "main.h"

/**
 * _atoi - A function that converts a string to an int
 * @s: string
 * Return: Anything
 */
int _atoi(char *s)
{
	unsigned int tally = 0, extent = 0, i = 0, j = 1, k = 1, l;

	while (*(s + tally) != '\0')
	{
		if (extent > 0 && (*(s + tally) < '0' || *(s + tally) > '9'))
			break;

		if (*(s + tally) == '-')
			j *= -1;

		if ((*(s + tally) >= '0') && (*(s + tally) <= '9'))
		{
			if (extent > 0)
				k *= 10;
			extent++;
		}
		tally++;
	}

	for (l = tally - extent; l < tally; l++)
	{
		i = i + ((*(s + l) - 48) * k);
		k /= 10;
	}
	return (i * j);
}
