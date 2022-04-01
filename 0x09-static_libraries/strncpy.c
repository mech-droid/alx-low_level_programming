#include "main.h"



/**

 * _strncpy - Copies a string

 *

 * @dest: Destination string value

 *

 * @src: Source value

 *

 * @n: Number of src to be copied

 *

 * Return: Pointer to dest

 */



char *_strncpy(char *dest, char *src, int n)

{

	int i = 0;



	while (src[i] != '\0' && i < n)

	{

		*(dest + i) = src[i];

		i++;

	}



	while (i < n)

	{

		dest[i] = '\0';

		i++;

	}



	return (dest);

}
