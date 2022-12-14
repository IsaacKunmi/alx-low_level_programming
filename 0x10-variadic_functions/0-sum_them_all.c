#include "variadic_functions.h"
#include <stdarg.h>

/**
 *sum_them_all - sums all its parameters
 *
 *@n: initial integer for initialization of variadic function
 *Return: Sum of parameters or 0if unsuccessful
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int a;
	int sum;

	va_list ap;

	va_start(ap, n);

	for (a = 0; a < n; a++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);

}
