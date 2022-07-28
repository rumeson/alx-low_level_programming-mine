#include "main.h"

/**
* _strspn - a function that gets the length
*  of a prefix substring
* @s: pointer to string
* @accept: check these bytes
*
* Return: Nothing
*/

unsigned int _strspn(char *s, char *accept)
{
	int len_accept = 0, j, i;
	unsigned int n = 0;
	int len_s = 0;

	while (*accept != 0)
	{
		len_accept++;
		accept++;
	}
	while (*s != 0)
	{
		if (*s == ',' || *s == ' ')
			break;
		len_s++;
		s++;
	}
	accept = accept - len_accept;
	s = s - len_s;
	for (i = 0; i < len_accept; i++)
	{
		for (j = 0; j < len_s; j++)
			if (*(s + j) == *(accept + i))
				n++;
	}
	return (n);
}
