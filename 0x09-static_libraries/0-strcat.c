#include "main.h"



/**

  * _strncat - Concatenates two strings

  * @dest: The destination value

  * @src: The source value

  * @n: The limit of the concatenation

  *

  * Return: A pointer to the resulting string dest

  */



char *_strncat(char *dest, char *src, int n)

{

	int i = 0;

	int j = 0;



	while (dest[i] != '\0')

		i++;



	while (src[j] != '\0' && n != j)

	{

		*(dest + i) = src[j];

		j++;

		i++;

	}



	*(dest + i) = '\0';



	return (dest);

}
