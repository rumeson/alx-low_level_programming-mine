#include "main.h"

/**
* binary_to_unit - converts a binary number to unsigned int
* @b: pointer to number
* Return: converted number
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, res = 0;

	if (!b)
		return (0);


	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		res = 2 * res + (b[i] - '0');
	}
	return (res);
}
