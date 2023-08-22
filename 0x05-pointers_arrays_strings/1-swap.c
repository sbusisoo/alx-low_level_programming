#include "main.h"
#include <string.h>
/**
 * swap_int - a functions that swaps values
 * @a: first value
 * @b: second value
 * Return: 0  success
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

}
