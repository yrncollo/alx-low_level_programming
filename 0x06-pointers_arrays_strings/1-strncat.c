#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: first ponter
 * @src: second pointer
 * @n: bytes of the src
 * Return: pointer to resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	j = 0;
	for (i = 0; dest[i] != '\0'; i++)
		;
	while (src[j] != '\0' && j < n)
	{
		dest[i + j] = src[j];
		j++;
	}
	return (dest);
}
