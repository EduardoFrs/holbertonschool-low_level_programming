#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function that print strings
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 * @...: variable number of parameters
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list string;

	va_start(string, n);

	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(string, char *));
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}

	va_end(string);
	printf("\n");
}
