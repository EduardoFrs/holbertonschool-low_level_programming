#include "main.h"

/**
 * print_line - print a straight line
 * Return: always 0
 */

void print_line(int n)

{
	char line = '_';

	while (n < 5)
	{
		_putchar(line);
		n++;
	}
	_putchar('\n');
}
