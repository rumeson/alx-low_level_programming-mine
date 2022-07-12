#include "main.h"

/**
 * add_comma_space - adds comma and space
 * Return: Nothing
 */
void add_comma_space(void)
{
		_putchar(',');
		_putchar(' ');
}

/**
 * print_num - prints the number
 * @n: parameter to print
 * Return: Nothing
 */
void print_num(int n)
{
	if ((n / 10) > 0)
		print_num(n / 10);
	_putchar((n % 10) + '0');
}

/**
 * print_to_98 -  function that prints all natural
 * numbers from n to 98, followed by a new line.
 * @n: number to start count from
 * Return: Nothing
 */

void print_to_98(int n)
{
	int i = n;
	int j = n;

	if (n > 98 || n == 98)
		for (i = n; i > 97; i--)
		{
			if (i != n)
				add_comma_space();
			print_num(i);
		}
	else if (n < 98)
		for (j = n; j < 99; j++)
		{
			if (j != n)
				add_comma_space();
			if (j < 0)
			{
				int k = -j;

				_putchar('-');
				print_num(k);
			}
			else
				print_num(j);
		}
	_putchar('\n');
}
