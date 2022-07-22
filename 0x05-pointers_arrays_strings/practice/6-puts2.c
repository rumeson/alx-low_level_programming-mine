#include "main.h"

/**
* puts2 - a function that prints every other
* character of a string, starting with the
* first character, followed by a new line
* @str: pointer to string
* Return: Nothing
*/

void puts2(char *str)
{
	int i = 0;
	int len = 0;
	while (*str != 0)
	{
		len++;
		str++;
	}
	str = str - len;
	i = 0;
	while (str != 0 && i < len)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
