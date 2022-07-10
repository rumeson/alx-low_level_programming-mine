#include "main.h"

/**
 * times_table - function that prints the 9
 * times table, starting with 0.
 * Return: Nothing
 */

void times_table(void)
{
	int j, i;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 10; i++)
		{
			int k = i * j;

			if (i != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				if (k < 10)
					_putchar(' ');
			}

			_divide_num(k); 
		}
		_putchar('\n');
	}
}
