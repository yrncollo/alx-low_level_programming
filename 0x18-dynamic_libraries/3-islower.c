#include "main.h"

/**
 * _islower - checks lower case characters
 * @c: expects integer c
 *
 * Return: 0 if lowercase, 1 i if otherwiser
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
