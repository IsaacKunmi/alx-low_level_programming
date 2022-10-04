#include "main.h"

/**
 *print_diagsums - entry
 *
 * Description: funtion that print the sum of two diagonals
 *
 * @a: pointer to array
 *
 * @size: size of array
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int x, y, j;
	unsigned int main = 0;
	unsigned int opp = 0;


	for (x = 0; x < size; x++)
	{
		j = (size * x) + x;
		main += *(a + j);
	}

	for (y = 0; y < size; y++)
	{
		j = (size * y) + (size - 1 - y);
		opp += *(a + j);

	}

	printf("%d, %d\n", main, opp);
}
