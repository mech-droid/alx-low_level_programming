#include "main.h"

/**
 * print_alphabet - Write a function that prints the alphabet, followed by a new line.
 */
void print_alphabet(void)
{
	char ch;

	ch = 'a';

	while(ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}

	_putchar('\n');
}

