#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet x10
 *
 * Return: Nothing
 */

void print_alphabet_x10(void)
{
	char alph = 'a';
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		alph = 'a';

		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(alph);
			alph++;
		}

		_putchar('\n');
	}
}
