#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguments it receives.
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i;
	int res = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			res = res * atoi(argv[i]);
		}
		printf("%d\n", res);
	}
	else
		printf("Error\n");

	return (1);
}
