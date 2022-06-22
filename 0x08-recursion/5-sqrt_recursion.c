#include "main.h"
/**
 * _sqrt_recursion - find sqrt by recursion
 * @n: find sqrt of n
 *
 * Return: square root of no
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (n == 1)
	{
		return (1);
	}
	if (n < 1)
	{
		return (-1);
	}

	return (_square_root(n, i));
}
