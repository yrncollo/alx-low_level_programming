#include "main.h"

/**
 * _strlen - calculate length of string
 * @s: pointer to string
 *
 * Return: return length of character
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
