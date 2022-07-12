#include "main.h"
#include <string.h>

/**
 * puts2 -  function that prints every other
 * character of a string, starting with the
 * first character, followed by a new line.
 * @str: string to print
 * Return: Nothing
 */

void puts2(char *str)
{
	int leng = strlen(str) - 1;
	int i;

	for (i = 0; i <= leng; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
