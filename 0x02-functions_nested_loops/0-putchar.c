#include "main.h"

/**
 * main - Entry point prints "_putchar"
 *
 * Return: Nothing
 */

int main(void)
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
