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
	int i, j;
	char *k;

	i = 0;

	while (s[i] != '\0')
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
			k = &s[i];

			return (k);
			}

			j++;
		}

		s++;
	}

	return (0);
}
