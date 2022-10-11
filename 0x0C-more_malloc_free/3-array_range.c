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
	int c;

	if (min > max)
		return (NULL);


	a = malloc((max - min + 1) * sizeof(int));

	if (a == NULL)
		return (NULL);

	for (c = 0; min <= max; c++, min++)
	{
		a[c] = min;
	}

	return (a);
}
