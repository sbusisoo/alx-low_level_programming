#include "main.h"
/**
 * factorial - a function that gives a factorial
 * @n: the number
 * Return: the factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
