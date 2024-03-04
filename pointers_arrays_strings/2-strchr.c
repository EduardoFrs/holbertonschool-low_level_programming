#include "main.h"

/**
 * _strchr - locate a char in a string
 * @c: the char to be located
 * @s: the string where to locate the char
 *
 * Return: c is found - a pointer to the first occurence of c
 *         c is not found - NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
