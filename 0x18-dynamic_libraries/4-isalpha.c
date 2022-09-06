#include "main.h"

/**
 * _isalpha - checks if it is a letter
 * @c: variable containing the letter
 *
 * Return: 1 if  letter, 0 if else
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
