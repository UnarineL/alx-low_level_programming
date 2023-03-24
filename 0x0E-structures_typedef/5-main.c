#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * main - check code
 *
 * Return: 0 always
 */
int main(void)
{
	dog_t *my_dog;

	my_dog = new_dog("Poppy", 3.5, "Bob");
	printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
	free(my_dog);
	return (0);
}