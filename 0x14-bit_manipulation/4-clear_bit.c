#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a givenindex
 * @n: decimal
 * @index: index
 * Return: 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bit;

	bit = 1;
	bit = bit << index;
	if (index > sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);
	if (((*n >> index) & 1) - 1)
		*n = bit ^ *n;

	return (1);
}
