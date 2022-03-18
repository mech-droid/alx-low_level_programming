#include "main.h"

/**
 * print_diagonal - writes a function that draws a diagonal line on the terminal
 * @n: the number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int i, j;
		
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < 0; j++)
			{
				if (j == i)
				_putchar('\\');
				else if (j < i)
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
		
