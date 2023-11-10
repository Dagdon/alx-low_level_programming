#include "variadic_functions.h"

/**
 * sum_them_all - writes the sum of its parameters
 * @n: number of arguements
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	unsigned int a;

	va_list hold;

	va_start(hold, n);

	for (a = 0; a < n; a++)
	{
		if (n == 0)
		{
			return (0);
		}
		else
		{
			sum += va_arg(hold, const unsigned int);
		}
	}

	va_end(hold);
	return (sum);
}
