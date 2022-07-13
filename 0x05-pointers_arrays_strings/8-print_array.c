#include "main.h"
#include <stdio.h>

/**
 * print_array -  a function that prints n elements
 * of an array of integers, followed by a new line.
 * @a: arrays to be printed
 * @n: number of arrays to be printed
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int q;

	for (q = 0 ; q < n; q++)
	{
		printf("%d", a[q]);
		if (q != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
