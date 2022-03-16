#include <stdio.h>

/**
 * print_alphabet - Write a function that prints the alphabet, followed by a new line.
 * Return: Always 0 (Success)
 * \n
 */

void print_alphabet(void)
{
	char ch;
	ch = 'a';
	while(ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
)

