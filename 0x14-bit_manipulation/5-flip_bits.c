#include "main.h"

/**
 * flip_bits - returns the number of bits
 * @n: first number
 * @m: second number
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int sum, coun;

	sum = n ^ m;
	for (coun = 0; sum > 0;)
	{
		if ((sum & 1) == 1)
			coun++;
		sum = sum >> 1;
	}
	return (coun);
}
