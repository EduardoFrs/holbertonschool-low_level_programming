#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number
 *         or 0 if one or more chars in the string b that is not 0 or 1
 *         or 0 if b is null
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0, shift = 1;
	int len = 0;
	int i;

	if (b == NULL)
		return (0);

	while (b[len] != '\0')
		len++;

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);


		if (b[i] == '1')
			result += shift;

		shift <<= 1;
	}

	return (result);

}
