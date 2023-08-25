#include "main.h"
/**
 * reverse_array - a function that reverses content
 * @a: array of integers
 * @n: number of elements to swap
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int v;
	int temp;

	for (v = 0; v < n--; v++)
	{
		temp = a[v];
		a[v] = a[n];
		a[n] = temp;
	}
}
