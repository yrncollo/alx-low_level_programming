#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always (0) success
 */
int main(void)
{
	char alp; /* alphabet */

	for (alp = 'a' ; alp <= 'z'; alp++)
	{
		if (alp == 'q' || alp == 'e')
		{
			continue;
		}
		putchar (alp);
	}
	putchar('\n');
	return (0);
}
