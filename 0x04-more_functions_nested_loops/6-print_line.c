#include "main.h"

/**
 * print_line - Writesa function that draw a straight line in the terminals
 * @n: is the number of times the character _ is to be printed
 * the line should end with \n
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
