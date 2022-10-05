#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - entry
 *
 * Description: creates space for 2 dimensional array of integers
 *
 * @width: number of columns
 * @height: number of rows
 *
 * Return: pointer to a 2 dimensional array of integers
 */

int **alloc_grid(int width, int height)
{
	int a, b;

	int **ar;

	if (width <= 0 || height <= 0)
		return (NULL);

	ar = malloc(height * sizeof(int));
	if (ar == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		ar[a] = malloc(width * sizeof(int));

		if (ar[a] == NULL)
			return (NULL);

		for (b = 0; b < width; b++)
		{
			ar[a][b] = 0;
		}
	}

	return (ar);
}
