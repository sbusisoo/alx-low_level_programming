#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - a function that returns the sum of its parameters
 * @n: the parameter to check
 * Return: 0 if n == 0
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
