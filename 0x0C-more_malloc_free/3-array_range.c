#include "main.h"
#include <stdlib.h>
/**
 * array_range - a function that creates an array of ints
 * @min: the minimum values
 * @max: the max values
 * Return: NULL if it fails or if min > max
 */
int *array_range(int min, int max)
{
	int *ptr;
	int j, siz;

	if (min > max)
		return (NULL);
	siz = max - min  + 1;

	ptr = malloc(sizeof(int) * siz);

	if (ptr == NULL)
		return (NULL);
	for (j = 0; min <= max; j++)
		ptr[j] = min++;
	return (ptr);
}
