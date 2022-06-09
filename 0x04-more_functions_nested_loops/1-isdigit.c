#include"main.h"

/**
 * _isdigit - Checks for numbers 1-9
 * @c: requires an int value
 *
 * Return: Returns 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
