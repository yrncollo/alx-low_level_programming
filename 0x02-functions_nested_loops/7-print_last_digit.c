#include"main.h"

/**
 * print_last_digit - prints the last digit
 * @n: requires an int value
 *
 * Return: returns (0)
 */
int print_last_digit(int n)
{
	int lastdigit;

	lastdigit = n % 10;
	if (n < 0)
	{
		n = -n;
	}
	if (lastdigit < 0)
	{
		lastdigit = -lastdigit;
	}
	_putchar(lastdigit + '0');

	return (lastdigit);
}
