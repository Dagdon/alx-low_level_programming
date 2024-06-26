#include "main.h"
/**
 * sqrt_a - return the natural square root of a number
 * @a: input number
 * @b: iterator
 * Return: result
 */
int sqrt_a(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (sqrt_a(a, b + 1));
}
/**
 *  _sqrt_recursion - computes the natural  square root of a number
 *  @n: number
 *  Return: results
 */

int _sqrt_recursion(int n)
{
	return (sqrt_a(n, 0));
}
