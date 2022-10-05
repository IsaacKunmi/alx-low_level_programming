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
	int i, x;
	int y;
	int z = 0;
	int sum1 = 1;
	int sum2 = 1;
	char *ar;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
	{
		sum1++;
	}

	for (i = 0; s2[i] != '\0'; i++)
	{
		sum2++;
	}

	ar = malloc((sum1 * sizeof(char)) + (sum2 * sizeof(char)) - 1);

	if (ar == NULL)
		return (NULL);

	x = sum1 + sum2;

	for (y = 0; y < x; y++)
	{
		if (y <= sum1)
			ar[y] = s1[y];

		else
			ar[y] = s2[z++];
	}
	return (ar);
}
