#include "main.h"

/**
* p_num - check for prime
* @n: given integer
* @m: check prime
*
* Return: checker for prime
*/

int p_num(int n, int m)
{
	if (n == 1 || n < 0)
		return (0);
	else if (n == m)
		return (1);
	else if (m <= n && n % m == 0)
		return (0);
	else if (m < n && n % m != 0)
		return (p_num(n, ++m));
	return (1);
}

/**
* is_prime_number - return 1 if prime
* else return 0
* @n: integer
*
* Return: prime number
*/

int is_prime_number(int n)
{
	return (p_num(n, 2));
}
