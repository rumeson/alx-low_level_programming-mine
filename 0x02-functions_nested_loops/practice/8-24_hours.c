#include "main.h"

/**
 * add_zero - adds zero to numbers below 10
 *
 * divide_num - prints number
 *
 * jack_bauer -  function that prints every minute of the
 * day of Jack Bauer, starting from 00:00 to 23:59
 *
 * @m: puts 0 in front of this number
 *
 * @n: divides this number
 *
 * Return: Nothing
 */

void add_zero(int m)
{
	_putchar('0');
	_putchar((m % 10) + '0');
}

void divide_num(int n)
{
	if ((n / 10) > 0)
	{
		divide_num(n / 10);
	}

	_putchar((n % 10) + '0');
}

void jack_bauer(void)
{
	int i, j;

	for (j = 0; j < 24; j++)
	{
		for (i = 0; i < 60; i++)
		{
			if (j < 10)
				add_zero(j);
			else
				divide_num(j);

			_putchar(':');

			if (i < 10)
				add_zero(i);
			else
				divide_num(i);
			_putchar('\n');
		}
	}
}
