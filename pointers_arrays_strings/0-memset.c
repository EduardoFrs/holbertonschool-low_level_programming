#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @b: character to fill the memory with
 * @n: number of bytes to be filled
 * @s: pointer to the memory area to fill
 * Return: a pointer to the meemory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *memory = s, value = b;

	for (i = 0; i < n; i++)
		memory[i] = value;

	return (memory);
}
