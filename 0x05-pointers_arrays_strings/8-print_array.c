#include "main.h"
/**
 * print_array - a functions that prints elements of of array
 * @a: the string
 * @n: the number of elements
 * Return: 0 success
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < (n - 1); j++)
	{
		printf("%d, ", a[j]);
	}
	if (j == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
