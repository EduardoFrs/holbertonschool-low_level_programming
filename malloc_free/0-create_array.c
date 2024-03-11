#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - function that create an array of chars
 * @c: the char to initialize the function
 * @size: size of the array
 *
 * Return: if size = 0 : NULL
 *         if fail : NULL or pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
