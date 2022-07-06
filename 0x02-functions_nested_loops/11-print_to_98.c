#include "main.h"

/**
 * print_to_98 - print all natural numbers to 98
 *
 * divide_modulo - divides and modulos by 10
 * comma_space - adds comma and space after number
 *
 * @n: number to start print from
 * @a: integer parameter for divide_modulo function
 *
 * Return: Nothing
 */

void divide_modulo(int a)
{
	if (a == 98)
	{
		_putchar((a / 10) + '0');
		_putchar((a % 10) + '0');
	}

	else if (a <= 9 && a >= 0)
		_putchar((a % 10) + '0');

	else if (a <= 99 && a >= 0)
	{
		_putchar((a / 10) + '0');
		_putchar((a % 10) + '0');
	}

	else if (a <= 999 && a >= 0)
	{
		_putchar((a / 100) + '0');
		_putchar(((a % 100) / 10) + '0');
		_putchar(((a % 100) % 10) + '0');
	}

	else if (a <= 0 && a >= -9)
	{
		_putchar('-');
		_putchar((-a % 10) + '0');
	}

	else if (a <= -9 && a >= -99)
	{
		_putchar('-');
		_putchar((-a / 10) + '0');
		_putchar((-a % 10) + '0');
	}

	else if (a <= -99 && a >= -999)
	{
		_putchar('-');
		_putchar((-a / 100) + '0');
		_putchar(((-a % 100) / 10) + '0');
		_putchar(((-a % 100) % 10) + '0');
	}
}

void comma_space(void)
{
	_putchar(',');
	_putchar(' ');
}

void print_to_98(int n)
{
	if (n == 98)
		divide_modulo(n);

	else if (n < 98)
	{
		for (; n <= 98; n++)
		{
			divide_modulo(n);
			if (n != 98)
				comma_space();
		}
	}

	else if (n > 98)
	{
		for (; n >= 98; n--)
		{
			divide_modulo(n);

			if (n != 98)
				comma_space();
		}
	}
	_putchar('\n');
}
