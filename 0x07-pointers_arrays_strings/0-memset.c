#include "main.h"

/**
 * _memset - a function that fills a memory with a constant byte
 * @n: number of bytes
 * @s: address of memory
 * @b: expected value
 * Return: changed array with n byte new value
 */

char *_memset(char *s, char b, unsigned int n)
{
	int j = 0;

	for (; n > 0; j++)
	{
		s[j] = b;
		n--;
	}
	return (s);
}
