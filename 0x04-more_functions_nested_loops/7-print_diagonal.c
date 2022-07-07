#include "main.h"

/**
 * print_diagonal - prints diagonally
 * followed by a new line
 *
 * @n: parameter indicating number of times diagonal line should
 * be printed
 *
 * Return: Nothing
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (j = 1; j <= n; j++)
		{
			for (i = 1; i <= j; i++)
			{
				if (i == j)
					_putchar('\\');
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
