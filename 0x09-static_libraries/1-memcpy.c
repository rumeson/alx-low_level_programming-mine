#include "main.h"

/**
* _memcpy - a function that copies memory area
* @dest: destination pointer
* @src: source pointer
* @n: number of elements to copy
*
* Return: Pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
