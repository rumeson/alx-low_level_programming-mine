#include "main.h"

/**
 * _divide_num - prints numbers greater than 10
 * using _putchar
 * Return: Nothing
 */

void _divide_num(int n)
{
	if (n / 10 > 0)
		_divide_num(n / 10);

	_putchar((n % 10) + '0');
}
