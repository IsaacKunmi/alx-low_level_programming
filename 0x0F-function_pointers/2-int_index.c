#include "function_pointers.h"
/**
 *int_index - function searches for an integer
 *@array: array to itrate over
 *@size: number of elements in the array
 *@cmp: pointer to the function to be used to compare values
 *Return: inndex of first element found
 */

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
