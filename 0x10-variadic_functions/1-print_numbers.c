#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @n: number of integers
 * @separator: string to printed numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a, ar;

	va_list ptrr;

	va_start(ptrr, n);

	for (a = 0; a < n; a++)
	{
		ar = va_arg(ptrr, const unsigned int);
		printf("%d", ar);

		if (a != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptrr);
}
