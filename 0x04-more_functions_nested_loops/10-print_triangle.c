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
	int i = 1, j, k;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (k = 1; k <= size; k++)
		{
			for (j = 1; j <= size; j++)
			{
				i = size - j;
				
				_putchar('#');
				_putchar(' ');
			}
		_putchar('\n');
		}
	}
}
