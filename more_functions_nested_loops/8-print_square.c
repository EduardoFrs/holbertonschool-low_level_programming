#include "main.h"

/**
 * print_square - print a square
 * @size: size of the square
 */

void print_square(int size)

{
	int ligne, colonne;

	if (size > 0)
	{
		for (ligne = 0; ligne < size; ligne++)
		{
			for (colonne = 0; colonne < size; colonne++)
				_putchar('#');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
