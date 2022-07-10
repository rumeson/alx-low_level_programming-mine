#include "main.h"

/**
 * print_last_digit -  function that prints the last digit of a number.
 * Return: Always 0.
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -n;
		_putchar((n % 10) + '0');
		return (n % 10);
	}
	else if (n >= 0)
	{
		_putchar((n % 10) + '0');
		return (n % 10);
	}

	return (0);
}
