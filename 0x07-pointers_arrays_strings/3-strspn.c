#include "main.h"

/**
 *_strspn - entry
 *
 * Description: gets the length of a prefix substring
 *
 * @s: string to check
 *
 * @accept: input string
 *
 * Return: number od bytes in sthat has bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	while (*s != '\0')
	{
		if (*s == *accept)
		{
			i += 1;
			return (i);
		}

		s++;
	}

	return (i);
}
