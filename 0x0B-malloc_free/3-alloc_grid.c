#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
* alloc_grid -  a function that returns a
* pointer to a 2 dimensional array of integers
* @width: width of array
* @height: height of array
*
* Return: pointer to array
*/

int **alloc_grid(int width, int height)
{
	int *grid;

	*grid = (malloc (sizeof(width) * width + sizeof(height) * height));
	return (grid);

	if (width <= 0 || height <= 0)
		return (NULL);
}
