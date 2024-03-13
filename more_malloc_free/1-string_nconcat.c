#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - function that concatenate two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2
 *
 * Return: if fails - NULL
 *         else - pointer to the allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int len = n, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	result = malloc(sizeof(char) * len);

	if (result == NULL)
		return (NULL);

	len = 0;

	for (i = 0; s1[i]; i++)
		result[len++] = s2[i];

	for (i = 0; s2[i] && i < n; i++)
		result[len++] = s2[i];

	result[len] = '\0';

	return (result);
}
