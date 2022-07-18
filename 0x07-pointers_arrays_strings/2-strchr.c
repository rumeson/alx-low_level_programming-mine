#include "main.h"
#include <stddef.h>

/**
* _strchr - a function that locates a character
* in a string
* @s: pointer to string
* @c: character to search for
*
* Return: pointer to character or NULL
*/

char *_strchr(char *s, char c)
{
	int len = 0, i;

	while (*s != 0)
	{
		len++;
		s++;
	}

	s = s - len;

	for (i = 0; i < len; i++)
	{
		if (*(s + i) == c)
			return (&s[i]);
	}
	return (NULL);
}
