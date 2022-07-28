#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
* array_range - function that create array of integers
* @min: min integer
* @max: max integer
*
* Return: pointer to array
*/

int *array_range(int min, int max)
{
	int *ptr;
	int range = 0, i, j = min;

	if (min > max)
		return (NULL);
	for (i = min; i <= max; i++)
		range++;

	ptr = malloc(range * sizeof(int));

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < range; i++)
		ptr[i] = j++;

	return (ptr);
}
