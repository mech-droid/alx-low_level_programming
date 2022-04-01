#include "main.h"



/**

 * _strcmp - Compare two strings

 *

 * @s1: The First string

 *

 * @s2: The Second string

 *

 * Return: Integer value

 */



int _strcmp(char *s1, char *s2)

{

	int diff = 0;

	int i = 0;



	while (s1[i])

	{

		if (s1[i] != s2[i])

		{

			diff = ((s1[i] - '\0') - (s2[i] - '\0'));

			break;

		}

		i++;

	}

	return (diff);

}
