#include "function_pointers.h"
#include <stdio.h>
/**
 *int_index - function searches for an integer
 *@array: array to itrate over
 *@size: number of elements in the array
 *@cmp: pointer to the function to be used to compare values
 *Return: inndex of first element found
 */

int is_98(int elem)
{
	return (98 == elem);
}

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (size <= 0 || !array | !cmp)
		return (-1);

		for (a = 0; a < size; a++)
		{
			if (cmp(array[a]))
			{
				return (a);
			}
		}

		return (-1);

}

int main(void)
{
	int array[20] = {0, -98, 98, 4584, 4584, 8459, 45894, 4849, 49488, 48949, 48945};

	int index;

	index = int_index(array, 7, is_98);
	printf("%d\n", index);
	return (0);
}
