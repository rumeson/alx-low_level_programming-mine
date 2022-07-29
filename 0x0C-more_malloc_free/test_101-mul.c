#include <stdio.h>
#include <stdlib.h>

/**
* main - multiply two positive integers
* @argc - argument count
* @argv - argument vector
*
* Return: Nothing
*/

int main(int argc, char *argv[])
{
	int i, len;
/*	unsigned long long mul;*/
	if (!(argc == 3))
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		while (argv[len] != '\0')
			len++;
		for (j = 0; j < len; j++)
			if (argv[i][j] != 'c')
			{
				printf("Error\n");
				exit(98);
			}
	}

	for (i = 0; i < argc; i++)
		printf("argc : %d, argv : %s\n", i + 1, argv[i]);

	return (0);
}
