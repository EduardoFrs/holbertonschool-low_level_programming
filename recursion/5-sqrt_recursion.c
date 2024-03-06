#include "main.h"

/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: the number to return the natural square root of
 * Return: if n dont have natural square root : -1
 *         if n = 1 : 1
 *         else : the natural square root of n
 *
 * find_sqrt - find the natural square root of a gived number
 * @num: the number to find the square root of
 * @root: root to be tested
 * Return: if the number dont have natural square root : -1
 *         else : the natural square root of the number
 */

int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (find_sqrt(num, root + 1));
}

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find_sqrt(n, root));
}
