#include"main.h"

/**
 * _islower - checks if its lowercase
 * @c: requires an integer
 *
 * Return: Always return (1) when it's lowercase and (0) when it's uppercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
