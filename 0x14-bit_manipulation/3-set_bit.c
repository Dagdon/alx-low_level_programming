#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: decimal
 * @index: index
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bit;

	if (index > sizeof(unsigned int) * 8)
		return (-1);
	bit = 1;
	bit = bit << index;
	*n = ((*n) | bit);
	return (1);
}
