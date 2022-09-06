#include "main.h"

/**
 * _abs - get absolute value
 * @n: value to get absolute value
 *
 * Return: return absolute value
 */
int _abs(int n)
{
	/* absolute value is distance of value from zero */
	if (n > 0)
	{
		return (n);
	}
	else if (n == 0)
	{
		return (n);
	}
	else
	{
		return (-n);
	}
}
