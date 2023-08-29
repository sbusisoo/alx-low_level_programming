#include "main.h"
/**
 * print_chessboard - a function that prints the chessboard
 * @a: the array
 * Return: 0 success
 */
void print_chessboard(char (*a)[8])
{
	int g;
	int h;

	for (g = 0; g < 8; g++)
	{
		for (h = 0; h < 8; h++)
			_putchar(a[g][h]);
		_putchar('\n');
	}
}
