#include "main.h"
#include <string.h>

/**
 * puts_half -  a function that prints
 * half of a string, followed by a new line.
 * @str: string to be printed
 * Return: Nothing
 */

void puts_half(char *str)
{
	int leng = strlen(str) - 1;
	int half_leng = leng / 2;
	int i;

	for (i = half_leng + 1; i <= leng; i++)
		_putchar(str[i]);
	_putchar('\n');
}
