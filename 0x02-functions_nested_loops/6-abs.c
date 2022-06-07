#include "main.h"

/**
 * _abs - checks for absolute value of an int
 * @a: requires an int
 *
 * Return: Always (0)
 */
int _abs(int a)
{
	if (a < 0)
	{
		return (-a);
	}
	else if (a == 0)
	{
		return (0);
	}
	else
	{
		return (a);
	}
	return (0);
}

