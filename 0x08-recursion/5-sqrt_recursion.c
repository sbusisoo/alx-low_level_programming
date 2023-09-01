#include "main.h"
/**
 * _sqrt_recursion - a function that returns a nautural
 * @n: the natural numbers
 * @j: iterator
 * Return: n or -2
 */
int actual_sqrt_recursion(int n, int j);
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
/**
 * actual_sqrt_recursion - finds natural square root
 * @n: calculate square root
 * @j: intetor
 * Return: the square root
 */
int actual_sqrt_recursion(int n, int j)
{
	if (j * j > n)
		return (-1);
	if (j * j == n)
		return (j);
	return (actual_sqrt_recursion(n, j + 1));
}
