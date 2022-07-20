#include "main.h"

/**
* _puts_recursion - recursive function
* @n: pointer to string
*
* Return: Nothing
*/

void print_recur(char *n)
{
	if (*n == 0)
		return;
	_putchar(*n);
	print_recur(n + 1);
}

/**
* _puts_recursion - a function that prints a string,
* followed by a new line
* @s: pointer to the string
*
* Return: Nothing
*/

void _puts_recursion(char *s)
{
	print_recur(s);
	_putchar('\n');
}
