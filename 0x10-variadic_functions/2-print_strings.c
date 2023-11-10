#include "variadic_functions.h"

/**
 * print_strings - prints string
 * @separator: string to be printed in between the strings
 * @n: number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	char *strr;

	va_list ptrr_strr;

	va_start(ptrr_strr, n);

	for (a = 0; a < n; a++)
	{
		strr = va_arg(ptrr_strr, char *);

		if (strr == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", strr);
		}
		if (a != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptrr_strr);
}
