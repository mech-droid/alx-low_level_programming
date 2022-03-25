#include "main.h"

/**
  * *_strncat - concatenates n bytes from one string to another
  * @dest: mdestination string
  * @src: source string
  * @n: number of src byte to concatenate
  *
  * Return: a pointer to the resulting dest
  */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
