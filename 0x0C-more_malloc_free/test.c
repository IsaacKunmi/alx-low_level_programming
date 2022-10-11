#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *_calloc - allocates memory for an array
 *@nmemb: elemements in array
 *@size: byte size of elements
 *Return: void
 */

void simple_print_buffer(char *buffer, unsigned int size)
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
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *a;

	a = calloc(nmemb, sizeof(size));
		
		return (a);
}

int main(void)
{
	char *a;

	a = _calloc(98, sizeof(char));
	strcpy(a, "Best");
	strcpy(a + 4, "School! :)\n");
	a[97] = '!';

	simple_print_buffer(a, 98);

	free(a);

	return (0);
}
