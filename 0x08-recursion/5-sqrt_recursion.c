#include "main.h"
#include <stdio.h>
/**
* sqrt_recur - recur squareroot
* @sq_rt: square root number
* @n: given number
*
* Return: square root
*/

int _sqrt_recur(int n, int sq_rt)
{
	if ((sq_rt * sq_rt) == n)
		return (0);
	else if ((sq_rt * sq_rt) > n)
		return (0);
	else
		return (1 + _sqrt_recur(n, sq_rt++));
}

/**
* _sqrt_recursion - function that returns
* the natural square root of a number
* @n: number
*
* Return: the square root of number
*/

int _sqrt_recursion(int n)
{
	int sq_rt = 0;

	if (n <= 0)
		return (-1);
	else
		/*sq_rt = (1 + _sqrt_recur(n, sq_rt++));*/
		printf("test sqrt : %d\n", (1 + _sqrt_recur(n, sq_rt++)));
	return (0);
}
