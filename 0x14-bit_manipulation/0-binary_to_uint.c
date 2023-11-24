#include "main.h"

/**
 * binary_to_uint - converts binary to integer
 * @b: poinnter to a string of chars
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int len, a, k, sum, pwr;
	int base;

	base = 2;
	sum = 0;
	pwr = 1;

	if (b == NULL)
		return (0);
	for (len = 0; b[len] != '\0'; len++)
		;
	if (len == 1 && (b[0] == '0' || b[0] == '1'))
		return (b[0] - 48);
	for (a = 0; b[a] != '\0'; a++)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
		for (k = len - 1; k > 0; k--)
			pwr = pwr * base;
		sum = sum + (pwr * (b[a] - 48));
		len--;
		pwr = 1;
	}
	return (sum);
}
