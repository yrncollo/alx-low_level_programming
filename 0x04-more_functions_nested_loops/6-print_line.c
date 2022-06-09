#include "main.h"

/**
 * print_line - draws a straight line
 * @n: number of times _ is to be printed
 * Return: void
 */

void print_line(int n)
{
	int a = 0;

	while (a < n)
	{
		if (n <= 0)
			_putchar('\n');
		_putchar('_');
		a++;
	}
	_putchar('\n');
}
