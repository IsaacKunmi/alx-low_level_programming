#include "main.h"

/**
 *string_nconcat - function concatenates two strings
 *@s1: string to concat
 *@s2: string to concat
 *@n: number of bytes of s2 copy
 *Return: concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *b;
	unsigned int size, c, d;

	size = _strlen(s1);

	b = malloc((size + n + 1) * sizeof(char));

	if (b == NULL)
		return (NULL);

	for (c = 0, d = 0; c < (size + n); c++)
	{
		if (c < size)
			b[c] = s1[c];

		else
			b[c] = s2[d++];
	}

		b[c] = '\0';

		return (b);

}


/**
 * _strlen - find length of string
 *@s: string to find length
 *Return: Length of string
 */

int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
		;

	return (a);
}


