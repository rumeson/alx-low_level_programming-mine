#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
* print_numbers - prints numbers, followed by a new line
* @separator: string to be printed between numbers
* @n: number of integers passed to the function
*
* Return: Nothing
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;

	va_start(num, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(num, unsigned int));
		if (separator == NULL)
			continue;
		if (!(i == n - 1))
			printf("%c ", separator[0]);
	}
	printf("\n");
	va_end(num);
}
