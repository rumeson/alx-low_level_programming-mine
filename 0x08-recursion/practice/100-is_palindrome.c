#include "main.h"
#include <stdio.h>
/**
* get_len - get length
* @s: pointer to string
* Return: length
*/
int get_len(char *s)
{
	if (*s == 0)
		return (0);
	else
		return (1 + get_len(s + 1));
}
/**
* is_palindrome - return 1 is string is palindrome
* and 0 if not
* @s: pointer to string
*
* Return: validity
*/

int is_palindrome(char *s)
{
	char *new_s = s;
	char tmp = 'c';
	int index = 0;

	index = get_len(s);
	rev_s(s, new_s, index);
printf("s address : %p, new_s address : %p temp : %c, index : %d\n", s, new_s, tmp, index);

	return(1);
}
