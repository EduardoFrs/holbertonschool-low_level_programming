#include "main.h"

/**
 * _strncpy - copy up to n characters from the string pointed
 * @dest: pointer to the destination array where the content is to be copied
 * @src: string to be copied
 * @n: numbers of character to be copied
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}

	for (; n > i; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
