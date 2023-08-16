#include "main.h"
/**
 * _abs - a program that computes absolute values of integers
 * @s: numaber to be computes
 * Return: absolute value of number
 */
int _abs(int s)
{
	if (s < 0)
	{
		int abs_val;

		abs_val = s * -1;
		return (abs_val);
	}
	return (s);
}
