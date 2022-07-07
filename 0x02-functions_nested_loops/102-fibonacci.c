#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	unsigned long i, a = 1, b = 2, c;

	printf("%lu, %lu, ", a, b);

	for (i = 0; i < 48; i++)
	{
		c = a + b;
		if (i == 47)
			printf("%lu", c);
		else
			printf("%lu, ", c);
		a = b;
		b = c;
	}

	printf("\n");

	return (0);
}
