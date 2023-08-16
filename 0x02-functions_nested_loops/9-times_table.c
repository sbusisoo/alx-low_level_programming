#include "main.h"
/**
 * times_table - a program with the 9 times table
 * Return: void
 */
void times_table(void)
{
	int x, y, a, s, d;

	for (x = 0; x <= 9; x++)
	{
	for (y = 0; y <= 9; y++)
	{
		a = x * y;
		if (a > 9)
		{
		s = a % 10;
		d = (a - s) / 10;
		_putchar(44);
		_putchar(32);
		_putchar(d + '0');
		_putchar(s + '0');
		}
		else
		{
		if (y != 0)
		{
		_putchar(44);
		_putchar(32);
		_putchar(32);
		}
		_putchar(s + '0');
	}
	}
		_putchar('\n');
	}
}
