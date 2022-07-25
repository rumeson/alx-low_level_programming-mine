#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
* create_array -  function that creates an array
* of chars, and initializes it with a specific char
* @size: size of array
* @c: character
*
* Return: pointer to array
*/

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(sizeof(char) * size);

	if (size == 0)
		return (NULL);
	else if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}
