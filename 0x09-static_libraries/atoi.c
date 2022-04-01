#include "main.h"



/**

 * _atoi - Convert string to integer

 * @s: The pointer to convert

 *

 * Return: An integer

 */



int _atoi(char *s)

{

	int min = 1;

	int result = 0;



	while (s[0] != '\0')

	{

		if (s[0] == '-')

			min *= -1;

		else if (s[0] >= '0' && s[0] <= '9')

			result = (result * 10) + (s[0] - '0') * min;

		else if (result)

			break;



		s++;

	}



	return (result);

}
