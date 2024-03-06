#include "main.h"

/**
 * _strstr - locate a substring
 * @haystack: string to be scanned
 * @needle: string to be searched
 * Return: if its located - pointer to the beginning of located substring
 *         if its not located - NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
	{
		return (haystack);
	}

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do	{
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}
