#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of arguements
 *
 * @argc: number of arguements
 * @argv: array of strings
 *
 * Return: 0 if successful
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
