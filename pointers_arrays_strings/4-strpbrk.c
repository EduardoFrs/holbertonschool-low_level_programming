#include "main.h"

/**
 * _strpbrk - search in a string for any of a set of bytes
 * @s: string to be scanned
 * @accept: string coitaining the set of bytes to match
 *
 * Return: if a set is matched - pointer to the matched byte
 *         if no set is matched - NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
				return (s);
		}
		s++;
	}
	return ('\0');
}
