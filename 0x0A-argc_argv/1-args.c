#include <stdio.h>

/**
 * main - prints number of arguments passed to it
 * @argc: arguments count
 * @argv: array of arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
