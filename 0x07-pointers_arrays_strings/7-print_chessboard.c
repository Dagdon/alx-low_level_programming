#include "main.h"

/**
 * print_chessboard - a function that prints a chessboard
 * @a: array
 * Return: 0
 */

void print_chessboard(char (*a)[8])
{
	int l;
	int y;

	for (l = 0; l < 8; l++)
	{
		for (y = 0; y < 8; y++)
			_putchar(a[l][y]);
		_putchar('\n');
	}
}
