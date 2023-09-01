#include "main.h"
/**
 * is_prime_number - a function that chaecks for prime numbers
 * @n: the number
 * @j: iterator
 * Return: 1 if it is, otherwise 0
 */
int actual_prime(int n, int j);
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}
/**
 * actual_prime - calculates for prime number
 * @n: number to check
 * @j: iterator
 * Return: 1 if it is, otherwise 0
 */
int actual_prime(int n, int j)
{
	if (j == 1)
		return (1);
	if (n % j == 0 && j > 0)
		return (0);
	return (actual_prime(n, j - 1));
}
