#include "main.h"

/**
* binary_to_unit - converts a binary number to unsigned int
* @b: pointer to number
* Return: converted number
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	int j;

	if (!b)
		return (0);

	while (*b != '\n')
	{
		j = atoi(*b);
		i++;
		b++;
	}
	printf("%d    ,    %d\n", j, i);
	return (0);
}
