#include "main.h"
#include <stdlib.h>

/**
 * str_concat - entry
 *
 * Description: Concatenates two strings
 *
 * @s1: string to be concatenated
 * @s2: string to br concatenated
 *
 * Return: pointer to new space in memory containing @s1 and @s2
 */

char *str_concat(char *s1, char *s2)
{
	int i, x, y, z;
	char *ar;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (x = 0; s2[x] != '\0'; x++)
		;

	ar = malloc((i * sizeof(char)) + (x * sizeof(char)) + 1);

	if (ar == NULL)
		return (NULL);

	for (y = 0, z = 0; y < (i + x + 1); y++)
	{
		if (y <= i)
			ar[y] = s1[y];

		else
			ar[y] = s2[z++];
	}

	return (ar);
}
