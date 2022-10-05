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

	int sum = 1;

	char *ar;

	for (i = 0; str[i] != '\0'; i++)
	{
		sum++;
	}


	ar = malloc(sum * sizeof(char));

	if (str == NULL)
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
