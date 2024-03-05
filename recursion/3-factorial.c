#include "main.h"

/**
 * factorial - function that return the factorial of a given number
 * @n: the number to get the factorial of
 * Return: if n < 0 : -1 do indicate an error
 *         if n > 0 : the factorial of n
 */

int factorial(int n)
{
	int result = n;

	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	if (n > 0)
		result = (n * factorial(n - 1));
	return (result);
}
