#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
* _realloc - a function that reallocate a memory block
* using malloc and free
* @ptr: pointer
* @old_size: old size
* @new_size: new size
*
* Return: pointer to new_size
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (ptr == NULL)
	{
		ptr = malloc(new_size * sizeof(unsigned int));
		return (ptr);
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	free(ptr);

	ptr = malloc(new_size * sizeof(unsigned int) + 1);

	return (ptr);
}
