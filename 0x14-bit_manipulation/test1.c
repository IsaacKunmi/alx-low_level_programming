#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 *binary_to_unit -
 *Description: function that converts a binary number to an unsigned int.
 *@b:
 *Return: 
 */

unsigned int binary_to_uint(const char *b)
{
	int a = atoi(b), j, k, l, m = 0, sum = 0;;

	
	while (a)
	{
		k = a % 10;
		l = k << m;
		printf("%d\n", l);
		a /= 10;
		m++;
		sum += l;
	}

	return (sum);

}

int main(void)
{
	int b = binary_to_uint("1e01");

	printf("%d\n", b);
	return (b);
}
