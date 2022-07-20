#include "main.h"

/**
* print_recur - print recursively
* @n: pointer to string
* @l: length of string
*
* Return: Nothing
*/

void print_recur(char *n, char *m)
{
	if (n < m)
		return;
	_putchar(*n);
	print_recur(n--, m);
}

/**
* _print_rev_recursion - a function that prints a
* string in reverse
* @s: pointer to string
*
*Return: Nothing
*/

void _print_rev_recursion(char *s)
{
	int len = 0;
	char *new_s = s;

	if (*s != 0)
	{
		len++;
		s++;
	}

	print_recur(s, new_s);
}
