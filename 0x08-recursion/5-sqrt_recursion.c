#include "main.h"
/**
 * _sqrt_recursion - der natural square root
 * @n: input int number
 * Return: root of the square, or -1
 */

int _sqrt_recursion(int n)
{
	/* I will use a helper function for this task */
	return (get_square(n, 1));
}

/**
 * get_square - iterate until i*i = c
 * @c: number to get square root
 * @i: iterate to get perfect sqaure
 * Return: square root of perfect square
 */

int get_square(int c, int i)
{
	int square;

	square = i * i;
	if (square == c)
		return (i);
	else if (square < c)
		return (get_square(c, i + 1));
	else
		return (-1);
}
