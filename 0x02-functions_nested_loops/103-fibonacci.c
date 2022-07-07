#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	unsigned int a = 1, b = 2, c;

	printf("%u, %u, ", a, b);

	while (c <= 4000000)
	{
		c = a + b;

		if (c + b > 4000000)
			printf("%u", c);

		else if (c % 2 == 0)
			printf("%u, ", c);

		a = b;
		b = c;
	}

	printf("\n");

	return (0);
}
