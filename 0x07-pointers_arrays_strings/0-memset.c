#include "main.h"

/**
 * *_memset - fills the memory with constant byte
 * @s: memory area to be filled 
 * @b: char to copy
 * @n; number of times to copy b
 *
 * Return: pointer to the memory s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i < n)
			s[i] = b;
	}
	return (s);
}
