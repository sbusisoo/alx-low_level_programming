#include "main.h"
/**
 * _pow_recursion - a funtion that returns powers of x
 * @x: the value
 * @y: the power raised
 * Return: should it be lower than 0 it will be -1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
