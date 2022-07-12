#include <stdio.h>
#include <stdlib.h>

/**
 * main - all possible different combinations of two digits
 * The two digits must be different
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 * Print only the smallest combination of two digits
 * Numbers should be printed in ascending order, with two digits
 * You can only use putchar five times maximum in your code
 */

int main(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 10; i++)
		{
			if (i != j && j < i)
			{
				putchar(j + '0');
				putchar(i + '0');
			}

			if (j == 8 && i == 9)
				break;
			else if (i != j && j < i)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
