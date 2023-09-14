#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - a fucntion that searches for an int
 * @array: the array
 * @size: number of elements in array
 * @cmp: a pointer used to compare
 * Return: -1 for size
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (j = 0; j < size; j++)
	{
		if (cmp(array[j]))
			return (j);
	}
	return (-1);
}
