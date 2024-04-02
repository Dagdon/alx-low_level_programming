#include <stdio.h>

/**
 * main - print fibonacci numbers
 * Return: (0)
 */
int main(void)
{
	int a;
	long int fib[50];

	fib[0] = 1;
	fib[1] = 2;
	printf("%ld, %ld, ", fib[0], fib[1]);

	for (a = 2; a < 50; a++)
	{
		fib[a] = fib[a - 1] + fib[a - 2];

		if (a == 49)
		{
			printf("%ld\n", fib[a]);
		}
		else
		{
			printf("%ld, ", fib[a]);
		}
	}

	return (0);
}
