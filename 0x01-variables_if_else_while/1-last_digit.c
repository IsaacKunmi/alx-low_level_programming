#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 5)
	{
		printf("The last of n is %d and is greater than 5\n", n);
	} else if (n == 0)
	{
		printf("Last digit of n is %d and is 0\n", n);
	} else
	{
		printf("Last digit of n is %d and is less thab 6 and not 0\n", n);
	}

	return (0);
}
