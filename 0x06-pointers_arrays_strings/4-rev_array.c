#include "main.h"

/**
 * reverse_array - to reverse an array
 * @a: array pointer
 * @n: number of elements
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0, temp;

	n = n - 1;

	for (i = 0; i < n; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		n--;
	}
}
