#include "main.h"

/**
 * print_diagonal - prints a diagonal
 * @n: number of times the backward slash will be printed
 * Return:
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a, k;

		for (a = 0; a < n; a++)
		{
			for (k = 0; k <= a; k++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
