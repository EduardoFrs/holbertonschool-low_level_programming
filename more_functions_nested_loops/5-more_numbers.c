#include "main.h"

/**
 * more_numners - print numbers from 0 to 14 ten times
 * Return: always 0
 */

void more_numbers(void)
{
	int i = 0;
	char numbers;

	while (i < 10)
	{
		numbers = '0';
		while (numbers <= 14)
		{ 
			_putchar(numbers);
			numbers++;
		}
		_putchar('\n');
		i++;
	}
}
