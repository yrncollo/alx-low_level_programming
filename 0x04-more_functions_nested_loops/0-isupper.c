#include"main.h"

/**
 * _isupper - checks for uppercase character
 * @c: requires an integer
 *
 * Return: return (0)
 */
int _isupper(int c)
{
	int i;
	
	for (i ='A' ; i <= 'Z'; i++)
	{
		if ( c == i)
		{
			return (1);
		}
		else 
		{
			return (0);
		}
	}
	return (0);
}

