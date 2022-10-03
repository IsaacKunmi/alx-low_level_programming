#include "main.h"

/**
 *_strpbrk - entry
 *
 * Description: searches a string for any of a set of bytes 
 *
 * @s: string to be scanned
 *
 * @accept: string contiaining the characters to match
 *
 * Return: number of bytes in s that has bytes from accept
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0;

	while (*s != '\0')
	{
		if (*s == *accept)
		{
			return (s);
			break;
		}

		s++;
	}


	if (*s == *accept)
	{
		return (s);
	}

	return (NULL);
}
