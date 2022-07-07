#include "main.h"

/**
 * print_numbers - prints number 0 to 9
 * followed by a new line
 *
 * Return: Nothing
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		if (i != 2 && i != 4)
			_putchar(i + '0');

	_putchar('\n');
}
