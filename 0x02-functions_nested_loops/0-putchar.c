#include "main.h"

/**
 * _printputchar - prints "_putchar"
 *
 * Return: Nothing
 */

int printputchar(void)
{
	char a[] = "_putchar";
	int j;

	for (j = 0; j < 8; j++)
	{
		_putchar(a[j]);
	}

	_putchar('\n');

	return (0);
}
