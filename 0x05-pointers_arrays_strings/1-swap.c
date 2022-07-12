#include "main.h"

/**
 * swap_int - swaps the values two given integers
 * @a: first integer
 * @b: second integer
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int m = *a;
	int n = *b;

	*a = n;
	*b = m;
}
