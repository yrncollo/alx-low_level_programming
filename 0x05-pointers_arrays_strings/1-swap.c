#include"main.h"

/**
 * swap_int- swaps the value of two intergers
 * @a: first interger
 * @b: second integer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
