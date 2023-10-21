#include "main.h"

/**
 * _islower - a functiion that checks for lower case characters
 * @c: param to be returned
 * Return: 1 or 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <=  'z')
		return (1);
	else
		return (0);
}
