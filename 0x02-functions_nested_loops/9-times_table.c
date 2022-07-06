#include "main.h"

/**
 * times_table - returns the 9x table to stdout
 *
 * Return: Nothing
 */

void times_table(void)
{
/*	int a = '1';*/
	char i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 10; i++)
		{
			int a = (i * j);
			int b = (a / 10);
			int c = (a % 10);

			if (a == 0)
				_putchar(c + '0');

			else if (a < 9)
				_putchar(c + '0');

			else if (a > 9)
			{
				_putchar(b + '0');
				_putchar(c + '0');
			}

			else
				_putchar(a + '0');
		}

		_putchar('\n');
	}
	_putchar('\n');
}
