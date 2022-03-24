#include "main.h"

/**
  * reverse_array - reverses an array of integers
  * @a: array to be reversed 
  * @n: number of elemnts in array
  *
  */

void reverse_array(int *a, int n)
{
	int i, j, tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j--] = tmp;
	}
}
