#include "main.h"
#include <stdio.h>
/**
* count_len - count length
* @s: pointer to string
* @n: length of string
* Return: Always 0
*/

int count_len(char *new_s, int n)
{
	n++;
	if (*new_s == 0)
	{
		return (n);
	}
	new_s++;
	printf("len : %d\tnew_s : %p\n", n, new_s);
	count_len(new_s, n);
	return (n);
}

/**
* _strlen_recursion - a function that returns
* the length of a string
* @s: pointer to string
*
* Return: Always 0
*/

int _strlen_recursion(char *s)
{
	int len = 0;
	int l;
	l = (count_len(s, len));
	printf("%d\n", l);
	printf("%p\n", s);
	return (0);
	/*return (count_len(s, len));*/
}
