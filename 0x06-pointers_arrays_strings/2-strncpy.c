#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @src: source
 * @dest: destination
 * @n: number of strings to be copied
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}

	for (i = i; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
