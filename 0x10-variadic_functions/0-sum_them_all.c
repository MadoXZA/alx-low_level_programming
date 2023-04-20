#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - retuns sum of all parameters
 * @n: the number of paramters passed to functions
 * @...: variable number of paramters to calc the sum
 *
 * Return: if n == 0 - 0
 *	otherwise - the sum of all paramters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int j, sum = 0;

	va_start(ap, n);

	for (j = 0; j < n; j++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
