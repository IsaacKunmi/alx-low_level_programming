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
	int i, j;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (count != i)
			break;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				count++;
		}
	}

	return (count);
}
