#include "main.h"
#include <stdio.h>
/**
* rev_string - function that reverses a string
* @s: pointer to string
* Return: Nothing
*/
void rev_string(char *s)
{
	char n;
	int i, e, test;
	int len = 1;
	int tmp_len = 0;

	while (*s != 0)
	{
		printf("length : %d,  pointer s : %s\n", len, s);
		len++;
		s++;
	}
	tmp_len = len - 1;
	s = s - tmp_len;
	printf("tmp_len : %d,  pointer s - len : %s\ns at tmp_len : %c\n", tmp_len, s, s[tmp_len]);
	test = (tmp_len / 2) + 1;
	printf("tem / 2 + 1 value : %d\n", test);
	for (i = 0; i < (tmp_len / 2) + 1; i++)
	{
		e = (tmp_len - i) - 1;
		n = s[i];
		s[i] = s[e];
		s[e] = n;
	}
}
