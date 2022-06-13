#include "main.h"
#include <stdio.h>

/**
 * print_array - print number of integers from array
 * @a: pointer to array
 * @n: number of integers to print
 *
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(",");
			printf(" ");
		}
		i++;
	}
	printf("\n");
}
