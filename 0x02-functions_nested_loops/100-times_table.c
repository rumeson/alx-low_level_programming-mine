#include "main.h"

/**
 * print_times_table - prints the timetable
 * of given parameter
 *
 * Return: Nothing
 */

void print_times_table(int n)
{
	int a, b;

	if (n < 100)
	{
		for (b = 0; b <= n; b++)
		{
			for (a = 0; a <= n; a++)
			{
				if ((a * b) > 9 && (a * b) <= 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(((a * b) / 10) + '0');
					_putchar(((a * b) % 10) + '0');
				}
				else if ((a * b) > 99 && (a * b) <= 999)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(((a * b) / 100) + '0');
					_putchar((((a * b) % 100) / 10) + '0');
					_putchar((((a * b) % 100) % 10) + '0');
				}
				else if ((a * b) >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(((a * b) / 1000) + '0');
					_putchar((((a * b) % 1000) / 100) + '0');
					_putchar(((((a * b) % 1000) % 100) / 10) + '0');
					_putchar(((((a * b) % 1000) % 100) % 10) + '0');
				}
				else if (a * b <= 9)
				{
					if (a == 0)
						_putchar((a * b) + '0');
					else
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
						_putchar((a * b) + '0');
					}
				}
			}
	
			_putchar('\n');
		}
	}
}
