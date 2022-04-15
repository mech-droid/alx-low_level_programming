#include "function_pointers.h"

/**
* int_index - a function that searches for an integer.
* @cmp: pointer to function
* @array: array of element
* @size: size of array
*
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
		for (i = 0; i < size; i++)
		{
			if ((cmp)(array[i]))
				return (i);
		}
	}
	return (-1);
}
