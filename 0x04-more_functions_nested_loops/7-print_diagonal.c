#include "main.h"

/**
 * print_diagonal - writes a function that draws a diagonal line on the terminal
 * @n: the number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	int i, j;
	
	if (n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= i; j++)
			{
				if (i == j)
				{
					_putchar ('\\');
					_putchar ('\n');
				}
				else
				{
					_putchar (' ');
				}
			}
		}
	}
	else
	{
		_putchar ('\n');
	}

}
		
