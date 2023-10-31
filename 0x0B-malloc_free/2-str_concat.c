#include "main.h"

/**
 * str_concat - concacate a string
 * @s1: string 1
 * @s2: string 2
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	int s1l = 0;
	int s2l = 0;
	int j;
	char *out;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (j = 0; s1[j] != '\0'; j++)
		s1l++;
	for (j = 0; s2[j] != '\0'; j++)
		s2l++;

	out = malloc(sizeof(char) * (s1l + s2l) + 1);

	if (out == NULL)
		return (NULL);
	for (j = 0; s1[j] != '\0'; j++)
		out[j] = s1[j];
	for (j = 0; s2[j] != '\0'; j++)
		out[s1l + j] = s2[j];
	return (out);
}
