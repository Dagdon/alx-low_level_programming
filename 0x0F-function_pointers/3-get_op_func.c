#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_op_func - a function that selects a function to perform an operation
 * @s: function operator
 * Return: pointer
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int a;

	/* initialize a */
	a = 0;

	/* s does not match any of the operands */
	while (ops[a].op != NULL && *(ops[a].op) != *s)
		a++;

	return (ops[a].f); /* return operation */
}
