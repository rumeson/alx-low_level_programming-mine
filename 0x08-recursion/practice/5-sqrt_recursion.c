#include "main.h"

/**
* _sqrt_num - get square root
* @n: given number
* @m: square root
*
*Return: square root
*/

int _sqrt_num(int n, int m)
{
	int sq_num = m * m;

	if (sq_num == n)
		return m;
	else if (sq_num < n)
		return (_sqrt_num(n, ++m));

	return (-1);
}

/**
* _sqrt_recursion - return square root of number
* @n: given number
*
*Return: Swuare root
*/

int _sqrt_recursion(int n)
{
	return (_sqrt_num(n, 1));
}
