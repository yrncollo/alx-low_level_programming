#include "main.h"

/**
 * _strcpy - copy string from one value to another
 * @dest: destination to copy
 * @src: source to copy from
 *
 * Return: return pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i++] = '\0';
	return (dest);
}
