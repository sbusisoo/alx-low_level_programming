#include "main.h"
/**
 * print_last_digit - a program that the last digit if a number
 * @v: the last digit
 * Return: the last digit
 */
int print_last_digit(int v)
{
	int last;

	last = v % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
