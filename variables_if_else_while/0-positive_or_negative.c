#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 * return: always 0 (sucess)
 */
int main(void)
{
	int n;

srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d\n", n);
	if (n > 0)
	{
		printf("is positive\n");
	}
	else if (n < 0)
	{
		printf("The number is negative");
	}
	else
	{
		printf("The number is zero");
	}
	return (0);
}
