#include "3-calc.h"

int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_add(int a, int b);
int op_mod(int a, int b);
/**
 * op_add - returns a the sum of a & b
 * @a: first number
 * @b: second numer
 * Return: the sum of a & b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - returns a difference a & b
 * @a: the first number
 * @b: the second
 * Return: the differnce
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - returns a product of a & b
 * @a: first number
 * @b: second number
 * Return: the product
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - returns the result of division
 * @a: the number
 * @b: the number divided by
 * Return: the result
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - returns a remainder of the division
 * @a: the first number
 * @b: the divided with
 * Return: the remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}
