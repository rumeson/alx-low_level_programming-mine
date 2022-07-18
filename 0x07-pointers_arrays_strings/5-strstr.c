#include "main.h"
#include <stddef.h>
/**
* _strstr - a function that locates a substring
* @haystack: pointer to string
* @needle: pointer to substring
*
* Return: Nothing
*/

char *_strstr(char *haystack, char *needle)
{
	int len_n = 0, j, i, n;
	int len_h = 0;

	while (*needle != 0)
	{
		len_n++;
		needle++;
	}
	while (*haystack != 0)
	{
		len_h++;
		haystack++;
	}
	needle = needle - len_h;
	haystack = haystack - len_h;
	for (i = 0; i < len_h; i++)
	{
		j = 0;
		n = i;
		if (*(needle + j) != *(haystack + i))
			continue;
		for ( ; j < len_n; j++)
		{
			if (*(needle + j) != *(haystack + n))
				break;
		}
		return (&haystack[i + 1]);

	}
	return (NULL);
}
