#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the address of the string
 * Return: length of string
 */

int _strlen(char *s)
{
	int len = 0;
	char str[] = s;

	for (i = str[0]; i <= s; i++)
		len++;
	return (len);
}
