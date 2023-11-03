#include "main.h"

/**
 * times_table - prints the 9 times table
 * Return: anything
 */

void times_table(void)
{
	int x, y, sum;

	for (y = 0; y < 10; y++)
	{
		for (x = 0; x < 10; x++)
		{
			sum = y * x;
			if (x == 0)
				printf("%d, ", sum);
			else
			{
				printf("%2d", sum);
				if (x != 9)
					printf(", ");
			}
		}
		printf("\n");
	}
}
