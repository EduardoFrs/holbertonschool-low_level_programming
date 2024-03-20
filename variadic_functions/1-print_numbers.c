#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function that print numbers
 * @separator: the string to be printed between numbers
 * @n: the number of int passed to the function
 * @...: variable number of parameters
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list nums;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}

	va_end(nums);
	printf("\n");
}
