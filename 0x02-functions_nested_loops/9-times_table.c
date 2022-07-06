#include "main.h"

/**
 * times_table - returns the 9x table to stdout
 *
 * Return: Nothing
 */

void times_table(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 10; i++)
		{
			if ((i * j) == 0 && i == 0)
				_putchar((i * j) + '0');
			else if ((i * j) == 0 && i != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(((i * j) % 10) + '0');
			}
			else if ((i * j) < 9 && i != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(((i * j) % 10) + '0');
			}
			else if ((i * j) > 9 && i != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(((i * j) / 10) + '0');
				_putchar(((i * j) % 10) + '0');
			}
			else if ((i * j) == 9 && i != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((i * j) + '0');
			}
		}

		_putchar('\n');
	}
}
