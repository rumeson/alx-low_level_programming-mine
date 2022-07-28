#include "main.h"
#include "stddef.h"
#include "stdlib.h"

/**
* get_len - get length
* @s: string
* @len: length
*
* Return: length
*/

int get_len(char *s, int len)
{
	while (s[len] != '\0')
		len++;
	return (len);
}

/**
* string_nconcat - concatenates two strings
* @s1: first string
* @s2: second string
* @n: n number of s2 string
*
* Return: pointer to new string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, len, i, j;
	char *ptr;

	j = len1 = len2 = len = 0;
	len1 = get_len(s1, len1);
	len2 = get_len(s2, len2);
	if (n >= len2)
		ptr = malloc((sizeof(*s1) * len1) + (sizeof(*s2) * len2) + 1);
	else
		ptr = malloc((sizeof(*s1) * len1) + (sizeof(*s2) * n) + 1);
	for (i = 0; i < len1; i++)
	{
		ptr[j] = s1[i];
		j++;
	}
	if (n >= len2)
	{
		for (i = 0; i < len2; i++)
		{
			ptr[j] = s2[i];
			j++;
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			ptr[j] = s2[i];
			j++;
		}
	}
	return (ptr);
}
