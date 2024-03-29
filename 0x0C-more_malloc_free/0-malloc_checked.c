#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
* malloc_checked - allocates memory using malloc
* @b: number argument
*
* Return: pointer
*/

void *malloc_checked(unsigned int b)
{
	void *c;

	c = malloc(b);
	if (c == NULL)
		exit(98);
	return (c);
}
