#include <stdlib.h>
#include <stdio.h>

/**
 * main - find and print the largest prime factor
 *
 * Return - Always 0
 */

int main(void)
{
	int n = 1231952;
	int i = 2;
	int num = n;

	if (num % i == 0)	
		num = num / i;
	

}
