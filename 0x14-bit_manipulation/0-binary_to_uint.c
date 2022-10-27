#include "main.h"

/**
 *binary_to_uint - entry
 *Description: function that converts a binary number to an unsigned int.
 *@b: number to base 2
 *Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int a = atoi(b);
	int j, k, l;
	int m = 0, sum = 0;

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
