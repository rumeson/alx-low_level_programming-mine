#include "main.h"

/**
 * print_sign - prints sign of number
 * @n: The character to print
 *
 * Return: 1 for true and 0 for false
 */

int print_sign(int n)
{
	if (n > 0)
		return (1);
	else if (n == 0)
		return (0);
	else if (n < 0)
		return (-1);

	return (0);
}
