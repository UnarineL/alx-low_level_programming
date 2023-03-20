#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure for dog
 * @name: dog's name
 * @owner: owner of the dog
 * @age: dog's age
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
