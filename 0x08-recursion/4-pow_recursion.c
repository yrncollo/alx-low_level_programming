#include "main.h"

/**
 * _pow_recursion - get x ^ y
 * @x: first digit
 * @y: get power y times
 *
 * Return: power or error
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
