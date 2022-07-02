#include <stdio.h>

/**
 * main - print the alphabts in lowercase,
 * then in uppercase
 * followed by a new line
 * Return: Always 0 (Success)
*/

int main(void)
{
	char lower_ch = 'a';
	char upper_ch = 'A';

	for (; lower_ch <= 'z'; lower_ch++)
		putchar(lower_ch);

	for (; upper_ch <= 'Z'; upper_ch++)
		putchar(upper_ch);

	putchar('\n');

	return (0);
}
