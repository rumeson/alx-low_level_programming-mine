#include "main.h"

/**
 * _abs - print the absolute number
 *@c: absolute number
 *
 * Return: Always 0
 */

int _abs(int c)
{
	if (c < 0)
	{
		c = (-c - c) + c;
		return (c);
	}
	else
	{
		return (c);
	}

	return (0);
}
