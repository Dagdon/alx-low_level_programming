#include "main.h"

/**
 * _strncat - to concatenate two strings
 * @src: source
 * @dest: destination
 * @n: number of elements to be concatenated
 * Return: dest +nn of src
 */

char *_strncat(char *dest, char *src, int n)
{
	int len_dest, i;

	for (len_dest = 0; dest[len_dest] != '\0'; len_dest++)
	{

	}

	for (i = 0; src[i] != 0 && i < n; i++)
	{
		dest[len_dest + i] = src[i];
	}

	return (dest);
}
