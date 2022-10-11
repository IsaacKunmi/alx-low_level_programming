#include "main.h"
#include <stdio.h>
/**
 *array_range - function creates an array of integers
 *@min: minimum number in array
 *@max: maximum number of array
 *Return: array of integers
 */

void simple_print_buffer(int *buffer, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		if (i % 10)
		{
			printf(" ");
		}
		if (!(i % 10) && i)
		{
			printf("\n");
		}
		printf("0x%02x", buffer[i]);
		i++;
	}
	printf("\n");
}

int *array_range(int min, int max)
{
	int *a;
	int c, size;

	size = (max - min) + 1; 
	printf("%d\n", size);
	a = malloc(size * sizeof(int));

	for (c = 0; c <= size; c++)
	{
		a[c] = min++;
	}

	return (a);
}

int main(void)
{
	int *a;

	a = array_range(0, 10);
	simple_print_buffer(a, 11);
	free(a);
	return (0);
}
