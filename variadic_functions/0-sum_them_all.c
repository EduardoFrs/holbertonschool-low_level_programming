#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - return the sum of all its parameters
 * @n: number of parameters
 * @...: variable number of paramaters to add them
 *
 * Return: if  n == 0 : 0
 *         else : the sum of the parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int sum = 0;
	va_list nums;

	va_start(nums, n);

	for (i = 0; i < n; i++)
		sum += va_arg(nums, int);

	va_end(nums);
	return (sum);
}
