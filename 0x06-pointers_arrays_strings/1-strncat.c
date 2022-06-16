#include "main.h"

/**
 * _strncpy - function that copies a string upto n
 * @dest: Ponter to the string to be copied to
 * @src: Pointer to the string to copy
 * @n: bytes of the src to copy
 * Return: pointer to resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}
