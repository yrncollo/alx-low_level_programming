#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always (0) success
 */
int main(void)
{
	char alp; /* alphabet */

	for (alp = 'a' ; alp <= 'z' ; alp++)
	{
		putchar(alp);
	}
	for (alp = 'A' ; alp <= 'Z' ; alp++)
	{
		putchar(alp);
	}
	putchar('\n');
	return (0);
}
