#include "main.h"

/**
 * print_alphabet - print the alphabet
 *
 * Return: Nothing
 */

void print_alphabet(void)
{
	char alph = 'a';
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(alph);
		alph++;
	}

	_putchar('\n');
}
