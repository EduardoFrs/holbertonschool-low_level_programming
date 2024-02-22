#include "main.h"

/**
 * print_alphabet_x10 - function that prints alphabet ten times
 * Return: Always 0.
 */

void print_alphabet_x10(void)

{
	int i = 0;
	char alphabet;

	while (i < 10)
	{
		alphabet = 'a';
		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');
		i++;
	}
}
