#include<stdio.h>
/**
 *main - Entry point
 *Description: print the sumof even fibonacci numbers
 *Return: 0
 */

int main(void)
{

	int total = 0;
	int i = 1, j = 2;
	int k;

	while  (j < 4000000)
	{
		if (j % 2 == 0)
		total += j;

		k = j;
		j += i;
		i = k;


	}

	printf("%d\n", total);

	return (0);
}
