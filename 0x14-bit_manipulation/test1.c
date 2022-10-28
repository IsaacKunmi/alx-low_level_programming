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
	int a = 0, c, d = 0;
	int j, k, l;
	int m = 0, sum = 0;

	if (b == NULL)
		return (0);

	for (c = 0; b[c]; c++)
	{
		if (b[c] != '0' && b[c] != '1')
			return (0);
	}

	while (b[d] != '\0')
	{
		if (b[d] < 48 || b[d] > 57)
		{
			return (0);
		}
		else
		{
		a = a*10 + (b[d] - 48);
		d++;
		}
	}

	printf("%d\n", a);

	while (a)
	{
		k = a % 10;
		l = k << m;
		a /= 10;
		m++;
		sum += l;
	}

	return (sum);
}

int main(void)
{
	int b = binary_to_uint("101");

	printf("\n%d\n", b);
	return (b);
}
