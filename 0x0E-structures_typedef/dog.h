#ifndef DOG_H
#define DOG_H

/**
* struct dog - description for dog struct
* @name: name of dog
* @age: age of dog
* @owner: owner of dog
*/

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
