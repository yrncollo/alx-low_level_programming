#include "main.h"

/**
 * factorial - returns facotorial of no
 * @n: number to get facotorial
 *
 * Return: factorial of no
 *
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
	return (n * factorial(n - 1));
	}
}
