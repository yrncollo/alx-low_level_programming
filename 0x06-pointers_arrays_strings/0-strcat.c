#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: first ponter
 * @src: second pointer
 * Return: pointer to resulting string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	j = 0;
	for (i = 0; dest[i] != '\0'; i++)
		;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	return (dest);
}
