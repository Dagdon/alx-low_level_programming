#include "main.h"

/**
 * _strchr - locating a char in a string
 * @c: entry
 * @s: entry
 * Return: 0 on success
 */

char *_strchr(char *s, char c)
{
	int l = 0;

	for (; s[l] >= '\0'; l++)
	{
		if (s[l] == c)
			return (&s[l]);
	}
	return (0);
}
