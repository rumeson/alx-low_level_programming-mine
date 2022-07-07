#include "main.h"

/**
 * print_square - prints a square
 * followed by a new line
 *
 * @size: parameter indicating number of squares to
 * be printed
 *
 * Return: Nothing
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (j = 1; j <= size; j++)
		{
			for (i = 1; i <= size; i++)
				_putchar('#');
		_putchar('\n');
		}
	}
}
