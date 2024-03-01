#include "main.h"

/**
 * _strcat - function that append a string to another one
 * @src: string to be append
 * @dest: first string
 * Return : pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int i, c;

	for ( i = 0; dest[i] != '\0' ; i++)

		for (c = 0; src[c] != '\0'; c++)
		{
			dest[i] = src[c];
			i++;
		}

	dest[i] = '\0';
	return (dest);
}
