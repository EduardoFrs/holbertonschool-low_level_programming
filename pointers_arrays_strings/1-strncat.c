#include "main.h"

/**
 * _strncat - function that append a string to another one
 * @src: string to be append
 * @dest: first string
 * @n: number of elements to concatenante in
 * Return: pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, c;

	for (i = 0; dest[i] != '\0' ; i++)
		;
	for (c = 0; src[c] != '\0' && n > 0; c++, n--, i++)
	{
		dest[i] = src[c];
	}
	return (dest);
}
