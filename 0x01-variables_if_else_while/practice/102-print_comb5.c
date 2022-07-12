#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints all possible combinations of two two-digit numbers.
 * The numbers should range from 0 to 99
 * The two numbers should be separated by a space
 * All numbers should be printed with two digits. 1 should be printed as 01
 * The combination of numbers must be separated by comma, followed by a space
 * The combinations of numbers should be printed in ascending order
 * 00 01 and 01 00 are considered as the same combination of the numbers 0 and 1
 * You can only use putchar eight times maximum in your code
 * 
 * Return: Always 0
 */

void add_zero(int n)
{
	putchar('0');
}

void divide_num(int n)
{
	if ((n / 10) > 0)
		divide_num(n / 10);

	putchar((n % 10) + '0');
}

int main(void)
{
	int i, j;

	for (j = 0; j < 100; j++)
	{
		for (i = 0; i < 100; i++)
		{
			if (j < i)
			{
				if (j < 10)
					add_zero(j);
				divide_num(j);
				putchar(' ');
				if (i < 10)
					add_zero(i);
				divide_num(i);
				if (j == 98 && i == 99)
					break;
				else
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
