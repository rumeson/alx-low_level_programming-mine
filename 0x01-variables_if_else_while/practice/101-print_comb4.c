#include <stdio.h>
#include <stdlib.h>

/**
 * main - print all possible combination of 3 digit numbers
 * Numbers must be separated by ,, followed by a space
 * The three digits must be different
 * 012, 120, 102, 021, 201, 210 are considered the same
 * combination of the three digits 0, 1 and 2
 * Print only the smallest combination of three digits
 * Numbers should be printed in ascending order, with three digits
 * You can only use putchar six times maximum in your code
 * Return: Always 0
 */

int main(void)
{
	int i, j, k;

	for (k = 0; k < 10; k++)
	{
		for (j = 0; j < 10; j++)
		{
			for (i = 0; i < 10; i++)
			{
				if ((i != j && j != k && i != k) && (k < j && k < i && j < i))
				{
					putchar(k + '0');
					putchar(j + '0');
					putchar(i + '0');
				}
				if (k == 7 && j == 8 && i == 9)
					break;
				else if ((i != j && j != k && i != k) && (k < j && k < i && j < i))
					{
						putchar(',');
						putchar(' ');
					}
			}
		}
	}
	putchar('\n');

	return (0);
}
