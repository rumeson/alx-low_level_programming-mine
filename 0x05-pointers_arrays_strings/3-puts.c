#include "main.h"
#include <string.h>

/**
 * _puts -  function that prints a string
 * followed by a new line, to stdout
 * @str: string to be printed
 * Return: Nothing
 */

void _puts(char *str)
{
	int len = strlen(str);
	int i;

	for (i = 0; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
