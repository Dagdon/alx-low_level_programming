#include "main.h"

/**
 * main - generates random valid passwords
 *
 * Return: 0
 *
 */
int main(void)
{
	int i = 0, j = 0;
	time_t m;

	srand((unsigned int) time(&m));
	while (j < 2772)
	{
		i = rand() % 128;
		if ((j + i) > 2772)
			break;
		j = j + i;
		printf("%c", i);
	}
	printf("%c\n", (2772 - j));
	return (0);
}
