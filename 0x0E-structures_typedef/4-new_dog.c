#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - dog to be created
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	size_t nn, oo, ii;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (nn = 0; name[nn] != '\0'; nn++)
		;
	nn++;
	dog->name = malloc(sizeof(char) * nn);
	if (dog->name == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (ii = 0 ; ii < nn; ii++)
		dog->name[ii] = name[ii];
	dog->age = age;
	for (oo = 0; owner[oo] != '\0'; oo++)
		;
	oo++;
	dog->owner = malloc(sizeof(char) * oo);
	if (dog->owner == NULL)
	{
		free(dog->owner);
		free(dog);
		return (NULL);
	}
	for (ii = 0; ii < oo; ii++)
		dog->owner[ii] = owner[ii];
	return (dog);
}
