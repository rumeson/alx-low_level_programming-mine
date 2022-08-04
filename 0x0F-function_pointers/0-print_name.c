#include "function_pointers.h"

/**
* print_name - a function that print a name
* @name: pointer to name
* @f: pointer to function
*
* Return: void
*/

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
