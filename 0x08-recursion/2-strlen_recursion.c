#include "main.h"

/**
* len_num - count string length
* @str: pointer to string
*
* Return: Always 0
*/

int len_num(char *str)
{
	if (*str == '\0')
		return (0);
	else
		return (1 + len_num(str + 1));
}

/**
* _strlen_recursion - a function that returns
* the length of string
* @s: pointer to string
*
* Return: Always 0
*/

int _strlen_recursion(char *s)
{
	int len = 0;

	len = len_num(s);
	return (len);
}
