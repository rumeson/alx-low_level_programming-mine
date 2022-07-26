#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
* _strdup - a function that returns a pointer
* to a newly allocated space in memory, which
* contains a copy of the string given as a parameter.
* @str: string
*
* Return: pointer to string
*/

char *_strdup(char *str)
{

	char *new_s;
	int len = 0, i;

	while (*str != 0)
	{
		len++;
		str++;
	}

	str = str - len;
	new_s = malloc(sizeof(*str) * len);

	for (i = 0; i < len; i++)
	{
		new_s[i] = *(str + i);
	}

	if (str == NULL)
		return (NULL);
	else if (new_s == NULL)
		return (NULL);

	return (&(new_s[0]));
}
