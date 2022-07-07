#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int i, a = 1, b = 2, c;

	printf("%d, %d, ", 1, 2);

	for (i = 0; i < 50; i++)
	{
		c = a + b;
		printf("%d, ", c);
		a = b;
		b = c;
	}

	printf("\n");

	return (0);
}
