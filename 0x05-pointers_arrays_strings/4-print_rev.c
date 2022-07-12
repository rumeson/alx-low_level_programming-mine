#include "main.h"
#include <string.h>

/**
 * print_rev - a function that prints a
 * string, in reverse, followed by a new line
 * @s: string to be reversed
 * Return: Nothing
 */

void print_rev(char *s)
{
	int len = strlen(s) - 1;
	int i;

	for (i = len; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
