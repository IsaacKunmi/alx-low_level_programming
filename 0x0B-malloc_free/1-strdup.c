#include "main.h"
#include <stdlib.h>

/**
 * _strdup - entry
 *
 * Description: return pointer to new space in memory
 *
 * @str: string to be copied
 *
 * Return: pointer to newly allocated space in memory
 */

char *_strdup(char *str)
{
	int n, i;

	int sum = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		sum++;
	}

	char *ar;

	ar = malloc(sum * sizeof(char));

	if (ar == NULL)
	{
		return (NULL);
	}


	n = 0;

	while (n < sum)
	{
		ar[n] = str[n];

		n++;
	}

	return (ar);
}
