#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_strings - print strings
* @separator: seperates stings
* @n: number of arguments
*
* Return: Void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strg;
	unsigned int i;
	char *hold;

	va_start(strg, n);
	for (i = 0; i < n; i++)
	{
		hold = (va_arg(strg, char*));
		if (hold == NULL)
			printf("(nil)");
		else
			printf("%s", hold);
		if (!(i == n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strg);
}
