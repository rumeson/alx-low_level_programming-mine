#include "main.h"
#include <string.h>

/**
 * rev_string - a function that reverses a string
 * @s: string to reverse
 * Return: Nothing
 */

void rev_string(char *s)
{
	int leng = strlen(s) - 1;
	int i;
	int j = leng;

	for (i = 0; i < leng; i++)
	{
		s[i] = s[j];
		j--;
	}	
}
