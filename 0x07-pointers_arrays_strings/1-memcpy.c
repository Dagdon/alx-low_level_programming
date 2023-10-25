#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: copied memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int k = 0;
	int j = n;

	for (; k < j; k++)
	{
		dest[k] = src[k];
		n--;
	}
	return (dest);
}
