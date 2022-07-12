#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * rev_string - a function that reverses a string
 * @s: string to reverse
 * Return: Nothing
 */

void rev_string(char *s)
{
	int leng = strlen(s) - 1;
	int i = 0;
	int j;
	char new_s[1000];

	for (j = leng; j >= 0; j--)
	{
		s[i] = new_s[j];
		i++;
	}
	printf("%s\n", &new_s);
	s = new_s;
}
