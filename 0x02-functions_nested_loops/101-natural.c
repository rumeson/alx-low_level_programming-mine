#include <stdlib.h>
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0
 */

int main(void)
{
	int n = 1024;
	int sum = 0;
	int a, b, i;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			a = a + i;
	}

	printf("%d\n", a);

	return (0);
}
