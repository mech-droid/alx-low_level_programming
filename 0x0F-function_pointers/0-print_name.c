#include "function_pointers.h"

/**
 * print_name -  prints a name.
 *@f: pointer to function
 *
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
