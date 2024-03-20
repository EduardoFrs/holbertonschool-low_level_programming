#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - print a char
 * @args: list of arg pointing to the char to print
 */

void print_char(va_list args)
{
	printf("%i", va_arg(args, int));
}

/**
 * print_int - print an int
 * @args: list of arg pointing to the int to print
 */

void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - print a float
 * @args: list of arg poiting to the float to print
 */

void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - print a string
 * @args: list of arg pointing to the string to print
 */

void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - print anything
 * @format: list of types of arguments passed to the function
 * @...: variable number of parameters
 */

void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	va_list args;
	print_t types[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
	};

	char *separator = "";

	va_start(args, format);

	while (format != NULL && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == types[j].letter)
			{
				printf("%s", separator);
				types[j].f(args);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
