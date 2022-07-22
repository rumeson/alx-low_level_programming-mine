#include "main.h"
#include <stdio.h>

/**
* puts_half - a function that prints half of
* a string, followed by a new line
* @str: pointer to string
* Return: Nothing
*/

void puts_half(char *str)
{
	int len = 0;
	int l, i;

	while (*str != 0)
	{
		len++;
		str++;
	}
	l = len - 1;
	str = str - l;
	printf("str[0] : %c\n", str[0]);

	for (i = (l / 2); i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
