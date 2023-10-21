#include "main.h"

/**
 * _abs - prints the absolute value of an int
 * @a: parameter
 * Return: -a or a
 */

int _abs(int a)
{
	if (a < 0)
		return (-a);
	else if (a >= 0)
	{
		return (a);
	}

	return (0);
}
