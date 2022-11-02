#include "main.h"

/**
 * ro13 - encodes a string using rot 13
 * Return: encoded string
 */

char *rot13(char *s)
{

	int a, step = 0;

	while (*(s + step) != '\0')
	{
		for (a = 0; s[a] != '\0'; a++)
		{
			s[a] += 13;

		}


		step++;
	}


	return (s);

}
