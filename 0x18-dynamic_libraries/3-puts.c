#include "main.h"

/**
 * _puts - print string passed into it
 * @str: string passed to it
 *
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
