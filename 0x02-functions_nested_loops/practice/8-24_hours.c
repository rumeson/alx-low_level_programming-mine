#include "main.h"

/**
 * add_zero - adds zero to numbers below 10
 * @m: adds zero to this parameter
 */

void add_zero(int m)
{
	_putchar('0');
	_putchar((m % 10) + '0');
}

/**
 * divide_num - prints number
 * @n: number to print
 * Return: Nothing
 */

void divide_num(int n)
{
	if ((n / 10) > 0)
	{
		divide_num(n / 10);
	}
	_putchar((n % 10) + '0');
}

/**
 * jack_bauer - function that prints every minute of the
 * day starting from 00:00 to 23:59
 * Return: Nothing
 */

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
