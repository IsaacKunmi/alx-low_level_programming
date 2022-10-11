#include "main.h"

/**
 *array_range - function creates an array of integers
 *@min: minimum number in array
 *@max: maximum number of array
 *Return: array of integers
 */

int *array_range(int min, int max)
{
	int *a;
	int c, size;

	if (min > max)
		return (NULL);

	size = (max - min) + 1;

	a = malloc(size * sizeof(*a));

	if (a == NULL)
		return (NULL);

	for (c = 0; c <= size; c++)
	{
		a[c] = min++;
	}

	return (a);
}
