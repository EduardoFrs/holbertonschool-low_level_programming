#include "main.h"

/**
 * _puts_recursion - function that print a string
 * @s: the string to be printed
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}

	else if	(s[0] != '\0')
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
}
