#include<stdio.h>
/**
 *main - Entry point
 *Description: print the sum of all multiples of 3 or 5 below 1024
 *Return: 0
 */

int main(void)
{

	int a = 1;
	int sum = 0;

	while (a < 1024)
	{
		if (a % 3 == 0)
		{
			sum += a;
		} else if (a % 5 == 0)
		{
			sum += a;
		}
		a++;
	}

	printf("%d\n", sum);

	return (0);
}
