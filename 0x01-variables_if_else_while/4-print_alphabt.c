#include <stdio.h>

/**
 * main - prints all letters of the alphabet
 * except q and e
 * Return: Always 0 (Success)
*/

int main(void)
{
	char ch = 'a';

	for (; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
			putchar(ch);
	}

	putchar('\n');

	return (0);
}
