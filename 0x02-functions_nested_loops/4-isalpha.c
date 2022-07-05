#include "main.h"

/**
 * _isalpha - checks for lower case characters
 * @c: The character to print
 *
 * Return: 1 for true and 0 for false
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
