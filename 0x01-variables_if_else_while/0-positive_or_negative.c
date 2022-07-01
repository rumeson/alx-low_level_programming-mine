#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Fetches a random number
 * if number > 0 print number is positive
 * if number < 0 print number is negative
 * if number == 0 print number is zero
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);

	else if (n < 0)
		printf("%d is negative\n", n);

	else
		printf("%d is zero\n", n);

	return (0);
}
