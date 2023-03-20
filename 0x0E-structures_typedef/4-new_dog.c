#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates new dog
 * @name: name of the dog
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: new_dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}

	new_dog->name = malloc(strlen(name) + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = malloc(strlen(name) + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	new_dog->age = age;

	strcpy(new_dog->name, name);
	strcpy(new_dog->owner, owner);

	return (new_dog);
}
