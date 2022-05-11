#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog or NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *a_dog;
	int i, j;
	int len_name = 0, len_owner = 0;

	if (!(name) || !(owner))
		return (NULL);

	a_dog = malloc(sizeof(dog_t));
	if (a_dog == NULL)
		return (NULL);

	for (i = 0; name[i] != '\0'; i++)
		len_name++;
	for (j = 0; owner[j] != '\0'; j++)
		len_owner++;

	a_dog->name = malloc(len_name + 1);
	a_dog->owner = malloc(len_owner + 1);

	if (!(a_dog->name) || !(a_dog->owner))
	{
		free(a_dog->name);
		free(a_dog->owner);
		free(a_dog);
		return (NULL);
	}

	for (i = 0; i < len_name; i++)
		a_dog->name[i] = name[i];
	a_dog->name[i] = '\0';

	a_dog->age = age;

	for (j = 0; j < len_owner; j++)
		a_dog->owner[j] = owner[j];
	a_dog->owner[j] = '\0';

	return (a_dog);
}
