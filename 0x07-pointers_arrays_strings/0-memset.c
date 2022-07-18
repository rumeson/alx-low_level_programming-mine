#include "main.h"

/**
* _memset - a function that fills memory with a constant byte
* @s: pointer to memory aread
* @b: constant byte
* @n: first n bytes of memory area
*
* Return: Nothing
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
