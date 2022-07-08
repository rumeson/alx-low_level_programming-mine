#include "main.h"

/**
 * print_triangle - prints a triangle
 * followed by a new line
 *
 * @size: parameter indicating size of triangles
 * be printed
 *
 * Return: Nothing
 */

void print_triangle(int size)
{
	int i, k, m, n;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (k = 1; k <= size; k++)
		{
			i = size - k;

			for (m = 1; m <= i; m++)
				_putchar(' ');

			for (n = 1; n <= k; n++)
				_putchar('#');

		_putchar('\n');
		}
	}
}
