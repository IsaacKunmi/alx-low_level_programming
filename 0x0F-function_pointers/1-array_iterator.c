#include "function_pointers.h"
#include <stddef.h>
/**
 *array_iterator - executes a function given as a parameter
 *on each element of array
 *@array: to iterate over
 *@size: size of array
 *@action: pointer to the function
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	int a;

	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
