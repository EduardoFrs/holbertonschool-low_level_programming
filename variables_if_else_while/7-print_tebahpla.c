#include <stdio.h>
/**
 * main - Entry
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	char ch = 'z';

	for (ch = 'z'; ch >= 'a'; ch--)

		putchar(ch);

	putchar('\n');

	return (0);
}
