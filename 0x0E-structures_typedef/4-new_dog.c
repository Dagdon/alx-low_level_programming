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
	unsigned int nn1, oo1, ii;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (nn1 = 0; name[nn1] ; nn1++)
		;
	nn1++;
	dog->name = malloc(nn1 * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (ii = 0 ; ii < nn1; ii++)
		dog->name[ii] = name[ii];
	dog->age = age;
	for (oo1 = 0; owner[oo1] ; oo1++)
		;
	oo1++;
	dog->owner = malloc(oo1 * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->owner);
		free(dog);
		return (NULL);
	}
	for (ii = 0; ii < oo1; ii++)
		dog->owner[ii] = owner[ii];
	return (dog);
}
