#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - a function that prints numbers
 * @separator: a string to be printed between numbers
 * @n: the numberof integers passed to the function
 * @...: variable number to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int ind;

	va_start(nums, n);
	for (ind = 0; ind < n; ind++)
	{
		printf("%d", va_arg(nums, int));
		if (ind != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(nums);
}
