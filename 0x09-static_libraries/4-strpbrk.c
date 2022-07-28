#include "main.h"

/**
* _strpbrk - a function that searches a string
* for any of a set of bytes
* @s: pointer to string
* @accept: check these bytes
*
* Return: Nothing
*/

char *_strpbrk(char *s, char *accept)
{
	int len_accept = 0, j, i;
	int len_s = 0;

	while (*accept != 0)
	{
		len_accept++;
		accept++;
	}
	while (*s != 0)
	{
		len_s++;
		s++;
	}
	accept = accept - len_accept;
	s = s - len_s;
	for (i = 0; i < len_s; i++)
	{
		for (j = 0; j < len_accept; j++)
			if (*(s + i) == *(accept + j))
				return (&s[i]);
	}
	return (0);
}
