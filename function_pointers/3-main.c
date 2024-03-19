#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the result of the operation
 * @argc: number of argument of the program
 * @argv: array of pointer to the arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
	{
	int (*operator)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	operator = get_op_func(argv[2]);

	if (operator == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", operator(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
