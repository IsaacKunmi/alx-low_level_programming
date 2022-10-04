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
	int n;

	char *ar;

	n = size;
	ar = malloc(n * sizeof(char));

	if (ar == NULL)
	{
		return (NULL);
	}

	return (ar);




}
