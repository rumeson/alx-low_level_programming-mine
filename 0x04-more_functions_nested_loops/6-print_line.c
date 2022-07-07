#include "main.h"

/**
 * print_line - prints a line using _ character
 * followed by a new line
 *
 * @n: parameter indicating number of times _ line should
 * be printed
 *
 * Return: Nothing
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
			_putchar('_');
		_putchar('\n');
	}
}
