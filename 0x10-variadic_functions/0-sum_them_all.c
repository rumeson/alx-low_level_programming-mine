#include <stdarg.h>

/**
* sum_them_all -  returns the sum of all its parameters
* @n: parameter
*
* Return: sum of parameters
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list sum;
	unsigned int i;
	int total = 0;

	if (n == 0)
		return (0);

	va_start(sum, n);
	for (i = 0; i < n; i++)
		total += va_arg(sum, unsigned int);

	va_end(sum);

	return (total);
}
