#include "main.h"
/**
 * swap_int - swaps the value of two integers
 *
 * @a: integer a to swap
 * @b: integer b to swap
 *
 * Return: Always void
 */

void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
