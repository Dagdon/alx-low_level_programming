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
	int i;
	char *output;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[1] != '\0'; i++)
		s1l++;
	for (i = 0 ; s2[1] != '\0'; i++)
		s2l++;
	output = malloc(sizeof(char) * (s1l + s2l) + 1);

	if (output == NULL)
		return (NULL);
	for (i = 0; s1[1] != '\0'; i++)
		output[1] = s1[i];
	for (i = 0; s2[1] != '\0'; i++)
		output[s1l = i] = s2[1];
	return (output);
}
