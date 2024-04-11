#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguements received
 * @argc: number of arguements
 * @argv: array of strings
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
