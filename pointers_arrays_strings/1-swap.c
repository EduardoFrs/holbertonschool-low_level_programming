#include "main.h"

/*
 * swap_int - swap tha value of two integers
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
