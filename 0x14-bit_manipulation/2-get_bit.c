#include "main.h"

/**
 * get_bit - returns value of a bit at a given index
 * @n: decimal
 * @index: index
 * Return: value of bit or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int a;

	if (index > sizeof(size_t) * 8)
		return (-1);

	for (a = 0; a < index; a++)
		n = n >> 1;
	return ((n & 1));
}
