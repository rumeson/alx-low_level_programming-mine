#include "main.h"

/**
 * add_comma_space - add comma and space
 * @n: add space after number
 * Return: Nothing
 */
void add_comma_space(int n)
{
	_putchar(',');
	_putchar(' ');
	if (n < 100)
		_putchar(' ');
	if (n < 10)
		_putchar(' ');
}

/**
 * print_num - prints number
 * @n: number to print
 * Return: Nothing
 */
void print_num(int n)
{
	if ((n / 10) > 0)
		print_num(n / 10);
	_putchar((n % 10) + '0');
}
/**
 * print_times_table - print the given number times table
 * @n: parameter to print
 * Return: Nothing
 */

void print_times_table(int n)
{
	int j, i, k;

	if (n <= 15 && n >= 0)
	{
		for (j = 0; j <= n; j++)
		{
			for (i = 0; i <= n; i++)
			{
				k = j * i;
				if (i != 0)
					add_comma_space(k);
				print_num(k);
			}
			_putchar('\n');
		}
	}
}
