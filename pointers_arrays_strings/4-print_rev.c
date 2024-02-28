#include "main.h"

/**
 * print_rev - function that print a string in reverse
 * @s : string to print
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
