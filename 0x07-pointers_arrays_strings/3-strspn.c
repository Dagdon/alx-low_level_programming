#include "main.h"

/**
 * _strspn - to get the lenght of a prefix string
 * @accept: entry
 * @s: entry
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int l = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				l++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (l);
		}
		s++;
	}
	return (0);
}
