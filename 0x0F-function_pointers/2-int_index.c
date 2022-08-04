#include "function_pointers.h"

/**
* int_index - function searches for an integer
* @array: pointer to function
* @size: size of function
* @cmp: pointer to function
*
* Return: index of first element for which cmp function
* does not return 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
