#include <stdio.h>
#include <stdlib.h>

/**
 * main - print all the numbers in base 16
 * Return Always 0
 */

int main(void)
{
	char i = 'a'; 
	int k;

	for (k = 0; k <= 9; k++)
		putchar(k + '0');
	for (i = 'a'; i <= 'f'; i++)
		putchar(i);
	putchar('\n');

	return (0);
}
