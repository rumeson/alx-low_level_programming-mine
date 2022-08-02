#include "dog.h"
#include <stdlib.h>
#include <stddef.h>

/**
* new_dog - pointer to new_dog
* @name: name of dog
* @age: age of dog
* @owner: owner of dog
*
* Return: pointer to new_dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;

	my_dog = malloc(sizeof(dog_t));

	if (my_dog == NULL)
		return (NULL);
	my_dog->name = name;
	my_dog->age = age;
	my_dog->owner = owner;
	return (my_dog);
}
