#include "main.h"

/**
 * _isalpha - a function that checks for alphabetic characters
 * @c: param to be returned
 * Return: 1 or 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
