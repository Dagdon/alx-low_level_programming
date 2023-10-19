#include "main.h"

/**
 * _strcmp - to compare two strings
 * @s1: string one
 * @s2: string two
 * Return: 0 if its same
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int b = 0;

	for (i = 0; s1[i] != '\0' && b == 0; i++)
	{
		b = s1[i] - s2[i];
	}

	return (b);
}
