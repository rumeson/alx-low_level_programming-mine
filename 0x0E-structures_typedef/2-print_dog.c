#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
* print_dog - print dog struct
* @d: pointer to dog struct
*
*Return: Nothing
*/

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		d->name ? printf("Name: %s\n", d->name) : printf("Name: (nil)\n");
		d->age ? printf("Age: %f\n", d->age) : printf("Age: (nil)\n");
		d->owner ? printf("Owner: %s\n", d->owner) : printf("Owner: (nil)\n");
	}
}
