#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - a function that prints the 2 diagonals of square matrix
 * @a: array
 * @size: the size if array
 * Return: 0 success
 */
void print_diagsums(int *a, int size)
{
	int sum1, sum2, j;

	sum1 = 0;
	sum2 = 0;

	for (j = 0; j < size; j++)
	{
		sum1 = sum1 + a[j * size + j];
	}
	for (j = size - 1; j >= 0; j--)
	{
		sum2 += a[j * size + (size - j - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
