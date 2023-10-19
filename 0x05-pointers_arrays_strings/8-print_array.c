#include "main.h"

/**
 * print_array - print elements of array of integers
 * @a: array to be used
 * @n: elements to be printed
 * Return: 0
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
