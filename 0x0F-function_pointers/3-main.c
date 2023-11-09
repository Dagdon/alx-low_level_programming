#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - perform calculator functions
 * @argc: arguement count
 * @argv: arguement vector
 * Return: results
 */

int main(int argc, char *argv[])
{
	char *op; /* number operator */
	int numm1, numm2; /* numbers */

	if (argc !=  4) /* if arguement count is incorrect */
	{
		printf("Error\n");
		exit(98);
	}

	/* set arguement input */
	numm1 = atoi(argv[1]); /* first number input */
	op = (argv[2]); /* operator input */
	numm2 = atoi(argv[3]); /* second number input */

	/* if operator is not in list */

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(98);
	}

	/* if user tries dividing or performing modulus by 0 */
	if ((*op == '/' && numm2 == 0) || (*op == '%' && numm2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	/* prints result */
	printf("%d\n", get_op_func(op)(numm1, numm2));

	return (0);
}
