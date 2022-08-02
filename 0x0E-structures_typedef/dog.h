#ifndef DOG_H
#define DOG_H

/**
* struct dog - description for dog struct
* @name: name of dog
* @age: age of dog
* @owner: owner of dog
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

#endif /* DOG_H */
