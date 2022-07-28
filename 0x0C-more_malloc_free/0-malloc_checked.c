#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
* malloc_checked - allocates memory using malloc
* @b: number argument
*
* Return: pointer
*/

void *malloc_checked(unsigned int b)
{
	if (malloc(b) == 0)
		exit(98);
	return (malloc(b));
}
