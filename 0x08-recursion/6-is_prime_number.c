#include "main.h"

int check_prime(int n, int i);

/**
 * is_prime_number - checks if number is a prime number
 * @n: number
 * Return: integer 1 if prime number, otherwise 0
 */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - checks if number is a prime
 * @n: number
 * @i: iteration
 * Return: integer 1 if prime number, otherwise 0
 */

int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if (n / i < i)
		return (1);
	return (check_prime(n, i + 1));
}
