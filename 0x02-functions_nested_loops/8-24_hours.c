#include "main.h"
/**
 * jack_bauer - a progarm that every minute of the day of Jack Bauer
 * Return: 0
 */
void jack_bauer(void)
{
	int a, b, c, e;

	for (a = 0; a <= 2; a++)
	{
	for (b = 0; b <= 9; b++)
	{
	if ((a <= 1 && b <= 9) || (a <= 2 && b <= 3))
	{
	for (c = 0; c <= 5; c++)
	{
	for (e = 0; e <= 9; e++)
	{
	_putchar(a + '0');
	_putchar(b + '0');
	_putchar(58);
	_putchar(c + '0');
	_putchar(e + '0');
	_putchar('\n');
	}
	}
	}
	}
	}
}
