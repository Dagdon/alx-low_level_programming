#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - adds two numbers
 * @a: first digit
 * @b: second digit
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract two numbers
 * @a: first digit
 * @b: second digit
 * Return: remainder
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two numbers
 * @a: first digit
 * @b: second digit
 * Return: product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers
 * @a: first digit
 * @b: second digit
 * Return: product
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - divide two number
 * @a: first digit
 * @b: second digit
 * Return: remainder
 */

int op_mod(int a, int b)
{
	return (a % b);
}
