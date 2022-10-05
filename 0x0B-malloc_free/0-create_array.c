#include "main.h"
#include <stdlib.h>

/**
 * create_array - entry
 *
 * Description: create an array of char
 *
 * @size: size of array
 * @c: intializer of array
 *
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	int n, i;

	char *ar;

	n = size;
	ar = malloc(n * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}

	i = 0;

	while (i < n)
	{
		ar[i] = c;

		i++;
	}

	ar[i] = '\0';


	return (ar);




}
