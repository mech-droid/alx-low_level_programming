#include "function_pointers.h"

/**
* array_iterator - executes a function
* @action: pointer to function
* @array: array of element
* @size: size of element
*
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (action && array)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
