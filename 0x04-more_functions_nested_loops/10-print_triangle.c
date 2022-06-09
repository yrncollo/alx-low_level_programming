#include "main.h"

/**
 * print_triangle - draws a triangle
 * @size: size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (j = 1; j <= size; j++)
		{
			for (i = size; i >= 1; i--)
			{
				if (j < i)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
