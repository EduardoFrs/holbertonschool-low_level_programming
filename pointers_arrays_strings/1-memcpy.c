#include "main.h"

/**
 * _memcpy - copy n bytes from an memory area to another one
 * @n: number of byte to be copied
 * @src: memory area to copy the char from
 * @dest: memory area where copy the char
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *destination = dest;
	const char *source = src;

	for (i = 0; i < n; i++)
		destination[i] = source[i];

	return (dest);
}
