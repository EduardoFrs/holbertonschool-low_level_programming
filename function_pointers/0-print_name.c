#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function thats print a name
 * @name: the name to print
 * @f: pointer to a function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
