#include "main.h"
#include <stdio.h>

/**
* rev_string - a function that reverses a string
* @s: pointer to string
* Return: Nothing
*/

void rev_string(char *s)
{
	int len = 0;
	int i;
	char new_s[1000];

	while (*s != 0)
	{
		len++;
		s++;
	}
	for (i = 0; i < len; i++)
	{
		new_s[i] = *(s - 1);
		s--;
	}
	for (i = 0; i < len; i++)
	{
		*s = new_s[i];
		s++;
	}
}
